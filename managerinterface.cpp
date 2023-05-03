#include <cstdlib>
#include <cmath>
#include <iostream>
#include "manager.h"
#include "managerinterface.h"
using namespace std;


void ManagerInterface::runInterface(){
bool cont = true;
cout << "Welcome to the Inventory Manager!" << endl;
while (cont) {
    cout << "Please select an action to continue:" << endl;
    cout << "1 - add item" << endl;
    cout << "2 - add stock" << endl;
    cout << "3 - remove item" << endl;
    cout << "4 - log purchase" << endl;
    cout << "5 - print warehouse location" << endl;
    cout << "6 - give item information" << endl;
    cout << "7 - print log of purchases" << endl;
    cout << "8 - end program" << endl;
    cout << "Enter your selection: ";
    int s;
    cin >> s;
    if (s == 0) {
        break;
    }
    switch (s) {
        case 1:
        newItem();
        break;

        case 2:
        addStock();
        break;

        case 3:
        removeStock();
        break;

        case 4: 
        createPurchase();
        break;

        case 5:
        returnLocation();
        break;

        case 6:
        returnItem();
        break;

        case 7:
        print();
        break;

        case 8:
        cont = false;
        break;

        default:
        spacer();
        break;
    }
}
}

void ManagerInterface::returnItem(){
    string s;
    cout << "Enter Item's ID number:"; 
    cin >> s;
    cout << "" << endl;
    int i = stoi(s);
    Item j = manager.getItem(i);
    cout << "Name:" << j.name << endl;
    cout << "ID:" << j.id << endl;
    cout << "Bin Number:" << j.binNumber << endl;
    cout << "Price:" << j.price << endl;
    cout << "Stock:" << j.stock << endl;
}

void ManagerInterface::returnLocation(){
    string s;
    cout << "Enter Item's ID number:"; 
    cin >> s;
    cout << "" << endl;
    int i = stoi(s);
    Item j = manager.getItem(i);
    cout << "Bin Number:" << j.binNumber << endl;

}

void ManagerInterface::createPurchase(){
    int id;
    int quantity;
    cout << "Enter Item ID: " << endl;
    cin >> id;
    cout << "Enter Item Quantity: " << endl;
    cin >> quantity;
    bool result = manager.logPurchase(id,quantity);
    result ? cout << "Thank you!" << endl : cout << "Insufficient stock!" <<endl;
}

void ManagerInterface::newItem(){
int identifier = manager.itemMap.size() + 1;
string name, id;
int binNumber, price, quantity;
cout << "Enter Item name:" << endl;
cin >> name;
cout << "Enter Item ID:" << endl;
cin >> id;
cout << "Enter Bin Number" << endl;
cin >> binNumber;
cout << "Enter price:" << endl;
cin >> price;
cout << "Enter quantity:" << endl;
cin >> quantity;
manager.addItem(identifier,name,id,binNumber,price,quantity);
cout << "Created new item with identifier " << identifier << endl;

}

void ManagerInterface::addStock(){
int identifier;
int quantity;
cout << "Enter product identifier:" << endl;
cin >> identifier;
cout << "Enter Quantity:" << endl;
cin >> quantity;
manager.increaseStock(identifier,quantity);
}

void ManagerInterface::removeStock(){
int identifier;
cout << "Enter product identifier:" << endl;
cin >> identifier;
manager.removeItem(identifier);
}

void ManagerInterface::print(){
manager.printLog();
}

void ManagerInterface::spacer() {
    cout << "" <<endl;
}