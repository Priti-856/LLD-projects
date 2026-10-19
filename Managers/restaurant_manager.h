#ifndef RESTAURANT_MANAGER_H
#define RESTAURANT_MANAGER_H

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include"Restaurant.h"

using namespace std;

class RestaurantManager{
    private:
    vector<Restaurant*> restaurants;
    static RestaurantManager* instance;
    RestaurantManager(){
        //private constructor
    }
    public:
    static RestaurantManager* getinstance(){
        if(!instance){
            instance = new RestaurantManager();
        }
        return instance;
    }
    void addRestaurant(Restaurant* r){
        restaurants.push_back(r);
    }

    vector<Restaurant*> searchbyLocation( string loc){
        vector<Restaurant* > res;
        transform(loc.begin(), loc.end(), loc.begin(), ::tolower);
        for(auto r: restaurants){
            string rl  = r->getlocation();
            transform(rl.begin(), rl.end(), rl.begin(), ::tolower);
            if(rl == loc) res.push_back(r);
    }
    return res;

    }
};
RestaurantManager* RestaurantManager::instance = NULL;
#endif