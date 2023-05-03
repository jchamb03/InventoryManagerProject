#ifndef ITEM_H
#define ITEM_H
#include <string>

class Item 
{
    //Representation for item in the business (assumes retail type store)
    public: 
    Item();
    Item(std::string s, std::string id, int binNumber, int price, int stock);

    std::string name;
    std::string id; 
    int binNumber;
    int price;
    int stock;

    private: 
    
};


#endif