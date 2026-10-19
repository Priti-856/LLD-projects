#ifndef USER_H
#define USER_H

#include<iostream>
#include<vector>
#include<string>
#include"Cart.h"

using namespace std;

class User{
    private:
    int id;
    string name;
    string address;
    Cart* cart;
    public:
    User(const string& name, int id, const string& address){
        this->id = id; 
        this->name = name;
        this->address = address;
        cart = new Cart();
    }
    ~User(){
        delete cart;
    }

    //getters and setters
    string getname() const{
        return name;
   }
   void setname(const string& n){
    name = n;
   }
   string getaddress() const{
    return address;
   }
    void setaddress(const string &a){
        address = a;
    }
    Cart* getcart(){
        return cart;
    }
};

#endif.  //USER_H