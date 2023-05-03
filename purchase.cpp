#include <cstdlib>
#include <cmath>
#include <iostream>
#include "purchase.h"
#include <string>


Purchase::Purchase(int itemID, int quantity) {
    this -> itemID = itemID;
    this -> quantity = quantity;
}