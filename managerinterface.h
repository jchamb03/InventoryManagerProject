#ifndef MANAGERINTERFACE_H
#define MANAGERINTERFACE_H

#include <string>
#include <iostream>
#include "manager.h"

using namespace std;

class ManagerInterface 
{

public:
//Overall function to run interface
void runInterface();
//The following functions are actions the user can take, representing
// different actions from the Manager class.
void returnItem();

void returnLocation();

void createPurchase();

void newItem();

void addStock();

void removeStock();

void print();

void spacer();
Manager manager;

private: 


};


#endif