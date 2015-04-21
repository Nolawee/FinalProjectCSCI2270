//
//  RoadTrip.h
//  FinalProjectCSCI2270
//
//  Created by Nolawee Mengist on 4/20/15.
//  Copyright (c) 2015 nope. All rights reserved.
//
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

#ifndef __FinalProjectCSCI2270__RoadTrip__
#define __FinalProjectCSCI2270__RoadTrip__

#include <stdio.h>

struct city{
    std::string name;
    string ThingsTodo[5];
    city* next;
    
};

class RoadTrip
{
public:
    RoadTrip(std::string startingCity);
    virtual ~RoadTrip();
    void setThingsToDo();
    city* addCity(city* previous, string cityName);
    void removeCity(city* head, string deletedCity);
    void insertCity(city *head, string newCity, string PrevCity);
    void getCurrent();
    void findCity(std::string cityName);
    void printPath();
    void printActivities();
    
    
protected:
    
private:
    city *head;
    city *current;

};

#endif /* defined(__FinalProjectCSCI2270__RoadTrip__) */
