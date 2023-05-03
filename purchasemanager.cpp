#include <cstdlib>
#include <cmath>
#include <iostream>
#include "purchasemanager.h"
#include "purchase.h"
void PurchaseManager::logPurchase(int itemID, int quantity, int price) {
    Purchase p(itemID, quantity);
    purchaseLog.push_back(p);
    revenue += price * quantity;
}

int PurchaseManager::revenueTotal() {
    return revenue;
}