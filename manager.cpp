#include <cstdlib>
#include <cmath>
#include <iostream>
#include "manager.h"
using namespace std;


Item Manager::getItem(int id) {
return itemMap[id];
}

int Manager::getLocation(int id) {
return itemMap[id].binNumber;
}

bool Manager::logPurchase(int id, int quant) {
    if (itemMap[id].stock < quant) {
        return false;
    }
pm.logPurchase(id, itemMap[id].price, quant);
return true;
}

void Manager::addItem(int identifier, string name, string id, int binNumber, int price, int quantity) {
Item i(name, id, binNumber, price, quantity);
itemMap[identifier] = i;
}

void Manager::increaseStock(int identifier,int quantity) {
itemMap[identifier].stock += quantity;
}

void Manager::removeItem(int identifier) {
itemMap.erase(identifier);
}

void Manager::printLog() {
for (Purchase p : pm.purchaseLog) {
    cout << "Item Id: " << itemMap[p.itemID].name << endl;
    cout << "Quantity: " << p.quantity << endl;
}
}

