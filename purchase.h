#ifndef PURCHASE_H
#define PURCHASE_H
#include <string>

class Purchase 
{
    //similar to item class, represents a purchase (could be used as struct, but due to cohesion/coupling needs required to be 
    // a class itself.)
    public:
    Purchase(int itemID, int quantity);
    int itemID;
    int quantity;
    private:
    
};



#endif