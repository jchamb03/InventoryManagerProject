#ifndef PURCHASEMANAGER_H
#define PURCHASEMANAGER_H

#include <string>
#include <iostream>
#include <vector>
#include "purchase.h"
using namespace std;
class PurchaseManager 
{

    public:
    //logs purchase in vector
    void logPurchase(int itemID, int quantity, int price);
    // returns total revenue amount
    int revenueTotal();
    // sequential array of purchases
    vector<Purchase> purchaseLog;
    // running tally of total amount purchased
    int revenue;
    
    private:
    
};


#endif