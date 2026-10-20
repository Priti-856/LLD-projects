#ifndef ORDER_H
#define ORDER_H

#include<iostream>
#include<string>
#include<vector>
#include"user.h"
#include"Restaurant.h"
#include"menuitem.h"
#include"../Stratergies/paymentStratergy.h"
//#include"../util/timeutils.h"

using namespace std;

class Order{
    protected:
    static int nextorderid;
    int orderid;
    Restaurant*res;
    vector<Menuitem>items; //all items of orders
    User* user;
    paymentStratergy* ps;
    double total;
    string scheduled;
public:
    Order(){
        user = NULL;
        res = NULL;
        ps = NULL;
        total = 0.0;
        scheduled ="";
        orderid = ++nextorderid;
    }
    virtual~Order(){
        delete ps;
    }
    bool processpayment(){
        if(ps){
            ps->pay(total);
            return true;
        }
        else{
            cout<<"Choose a payment mode first..."<<endl;
            return false;
        }
    }
    virtual string gettype() const = 0;

    //getters and setters
    int getorderif() const{
        return orderid;
    }

    void setuser(User* u){
        user= u;
    }
    User* getuser(){
        return user;
    }
    void setRestaurant(Restaurant* r){
        res = r;
    }
    Restaurant* getrestaurant() const{
        return res;
    }
    void setitems(const vector<Menuitem>& its){
        items = its;
        total  = 0;
        for(auto& i: items){
            total += i.getprice();
        }
        
    }
    vector<Menuitem>& const getitems(){
        return items;
    }

    void setPaymentStratergy(paymentStratergy* p){
        ps = p;
    }
    void setScheduled(const string& s) {
        scheduled = s;
    }

    string getScheduled() const {
        return scheduled;
    }

    double getTotal() const {
        return total;
    }

    void setTotal(int total) {
        this->total = (double)total;
    }

};
#endif
