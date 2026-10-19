#ifndef MENUITEM_H
#define MENUITEM_H

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Menuitem{
private:
string code;
string name;
double price;

public:
Menuitem(const string& code, const string& name, double price){
    this->code = code;
    this->name = name;
    this->price = price;
}

string getcode() const {
    return code;
}
void setcode(const string& c){
    code = c;
}

string getname(){
    return name;
}

void setname(const string& n){
    name = n;
}

double getprice()const{
    return price;
}
void setprice(double p){
    price = p;
}
};
#endif 
