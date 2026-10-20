#ifndef PICKUPORDER_H
#define PICKUPORDER_H

#include"order.h"
using namespace std;

class pickuporder: public Order{

string Restaurantaddress;
public:
pickuporder(){
    Restaurantaddress ="";
}
string gettype() const override{
    return "Pickup";
}
//getters and setters
void setrestaurantaddress(const string& addr){
    Restaurantaddress = addr;
}
string getrestaurantaddress() const{
    return Restaurantaddress;
}
};

#endif