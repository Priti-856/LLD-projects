#ifndef DELIVERYORDER_H
#define DELIVERYORDER_H

#include<iostream>
#include<vector>
#include<string>
#include"order.h"
using namespace std;

class Deliveryorder: public Order{
private:
    string useraddress;
public:
    Deliveryorder(){
        useraddress = "";
    }
    string gettype() const override{
        return "Delivery";
    }

    //getters ande setters
    void setuseraddress(const string& addr){
        useraddress = addr;
    }
    string getuseraddress() const{
        return useraddress;
    }
};

#endif
