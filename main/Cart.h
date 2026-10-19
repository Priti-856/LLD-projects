#ifndef CART_H
#define CART_H

#include<iostream>
#include<vector>
#include<string>
#include"menuitem.h"
#include"Restaurant.h"


using namespace std;

class Cart{
Restaurant* res;
vector<Menuitem> menu;


public:
Cart(){
    res = NULL;
}

void additem(const Menuitem& item){
    if(!res){
        cerr<<"Set a restaurant before adding items..."<<endl;
        return;
    }
    menu.push_back(item);
}

double getTotal() const{
    double sum = 0; 
    for(const auto& it: menu){
        sum += it.getprice();
    }
    return sum;
}
bool is_empty(){
    return(!res || menu.empty());
}

void clear(){
    menu.clear();
    res = NULL;
}

//getters and setters
void setrestaurant(Restaurant* r){
    res = r;
}
Restaurant* getrestaurant() const{
    return res;
}
const vector<Menuitem>& getitems() const {
    return menu;
}
};

#endif //CART_H