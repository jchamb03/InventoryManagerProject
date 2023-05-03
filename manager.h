#ifndef MANAGER_H
#define MANAGER_H

#include <string>
#include <iostream>
#include <unordered_map>
#include "purchasemanager.h"
#include "item.h"
using namespace std;

class Manager 
{
    // This application assumes a retail store, with individual items (could be useful for services?)
    public: 
    // finds the item with the given id
    Item getItem(int id);
    // returns the bin number of the item with the given id number
    int getLocation(int id);
    // logs a purchase of the item with the given id, returns true if adequate stock
    bool logPurchase(int id, int quant);
    // adds item to the list of items,
    void addItem(int identifier, string name, string id, int binNumber, int price, int quantity);
    // increases stock of item in capacity
    void increaseStock(int identifier, int quantity);
    //removes item from catalog
    void removeItem(int identifier);
    //prints log of purchases
    void printLog();
    
    PurchaseManager pm;
    // key is in-store identifier number
    unordered_map<int,Item> itemMap;

    private: 
    
};

#endif