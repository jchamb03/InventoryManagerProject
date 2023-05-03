#include <cstdlib>
#include <cmath>
#include <iostream>
#include "item.h"
using namespace std;

Item::Item(std::string s, std::string id, int binNumber, int price, int stock) {
    this -> name = s;
    this -> id = id;
    this -> binNumber = binNumber;
    this -> price = price;
    this -> stock = stock;
}

Item::Item() {
    this -> name = "";
    this -> id = "";
    this -> binNumber = 0;
    this -> price = 0;
    this -> stock = 0;
}
