#ifndef ORDERFACTORY_H
#define ORDERFACTORY_H

#include"../Orders/order.h"
#include"Cart.h"
#include"Restaurant.h"
#include"../Stratergies/paymentStratergy.h"

#include<vector>
#include<string>
using namespace std;

class Orderfactory{
    public:
    virtual Order* createorder(User* user, Cart* cart, Restaurant* res, const vector<Menuitem>& menuitems, paymentStratergy* ps, const string & ordertype) = 0;
    virtual ~Orderfactory(){}
};
#endif
