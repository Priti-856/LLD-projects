#ifndef ORDERMANAGER_H
#define ORDERMANAGER_H


#include"order.h"
using namespace std;

class Ordermanager{
    private:
    vector<Order*>orders;
    static Ordermanager* instance;  //singleton class
    public:
    static Ordermanager* getinstance(){
        if(!instance){
            instance = new Ordermanager();
        }
        return instance;
    }

    void addOrder(Order* order){
        orders.push_back(order);
    }
    void listorder(){
        cout<<"\n-- All Order---"<<endl;
        for(auto order:orders){
            cout<<order->gettype()<< " order for "<< order->getuser()->getName()<<
            " | Total: "<<order->getTotal()
            << " | At: "<<order->getScheduled() <<endl;
        }
    }

};

Ordermanager*Ordermanager::instance= nullptr;


#endif