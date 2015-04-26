//
//  RoadTrip.cpp
//  FinalProjectCSCI2270
//
//  Created by Nolawee Mengist on 4/20/15.
//  Copyright (c) 2015 nope. All rights reserved.
//


#include <string>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include "RoadTrip.h"

RoadTrip::RoadTrip(string startingCity)
{

    //head->name = startingCity;
    
}



city* RoadTrip::addCity(city* previous, string cityName)
{
	city* n = new city;
	n->name = cityName;
	previous->next = n;
	return n;
}

void RoadTrip::insertCity(city *head, string newCity, string previousCity)
{
	city *n = new city;
	n = head;
	city *p = new city;
	p->name = newCity;

	while(n != NULL)
	{
		if(n->name == previousCity)
		{
			p->next = n->next;
			n->next = p;
			break;
		}
		else
		{
			n = n->next;
		}
	}
}

city* RoadTrip::removeCity(city *head, string deletedCity)
{
    city *temp;
    while (head-> name == deletedCity)
    {
        temp = head;
        head = head -> next;
        delete temp;
    }
    city *runner = head;
    city *temp2;
    while (runner -> next !=NULL)
    {
        if (runner -> next -> name == deletedCity)
        {
            temp2 = runner-> next;
            runner -> next = temp2 -> next;
            delete temp2;
            
        }
        else
        {
            runner = runner -> next;
        }
        
    }
    return head;
}

void RoadTrip::setThingsToDo(){
	cout << "What would you like to do in " << current->name << "?" << endl;
	cout << "You may add up to 5 activities." << endl;
	int i = 0;
	string command;
	while(i < 5 || command != "nothing"){
		getline(cin, command);
		current->ThingsTodo[i] = command;
		cout << "Add another activity or type 'nothing' to finish adding." << endl;
		i++;
	}
}

void RoadTrip::printActivities(){
	string cityName;
	cout << "Which city's activities would you like to print?" << endl;
	getline(cin, cityName);
	
	city *n = new city;
	n = head;
	while(n != NULL){
		if(n->name == cityName){
			break;
		}
		n = n->next;
	}
	
	if(n->name != cityName){
		cout << "City is not on path." << endl;
		printActivities();
	}
	
	else if (n->name == cityName){
		for(int i = 0; i < 5; i++){
			cout << i+1 << ". " << n->ThingsTodo[i] << endl;
		}
	}
}

void RoadTrip::printPath(city* head)
{
    city *n;
    n = head;
    cout<<"===CURRENT PATH==="<<endl;
    while (n != NULL) {
        cout<<n->name << "->";
        n = n->next;
    }
    cout<< "NULL" <<endl;
    cout << "=================" << endl;
}
/*
void RoadTrip::BuildNetworkWest()
{
 
    city* n;
    
    n = new city; //creates new node and sets n as the variable
    n->name = "Los Angeles";
    head = n;
    current = n;
    
    n = new city;
    n->name = "San Fransico";
    current->next = n;
    current = n;
    
    n = new city;
    n->name = "Seatlle";
    current->next = n;
    current = n;
    
    n = new city;
    n->name = "Denver";
    current->next = n;
    current = n;
 
    string citiesWest[4] = {"Los Angeles", "San Francisco", "Seattle", "Denver"};
    city *temp = new city;
    //city *z = new city;
    //z = head;
    head->name = citiesWest[0];
    for(int i = 1; i < 4; i++){
        temp = addCity(head,citiesWest[i]);
        head = temp;
        temp = temp->next;
        //x = temp;
    }

    
    return;

}

void RoadTrip::BuildNetworkEast()
{
    
    city* n;
    
    n = new city; //creates new node and sets n as the variable
    n->name = "New York";
    head = n;
    current = n;
    
    n = new city;
    n->name = "Washington D.C.";
    current->next = n;
    current = n;
    
    n = new city;
    n->name = "Boston";
    current->next = n;
    current = n;
    
    n = new city;
    n->name = "Philidelphia";
    current->next = n;
    current = n;
    
    
    
    return head;
 
    string citiesEast[4] = {"New York", "Washington D.C.","Boston", "Philidelphia"};
    city *temp = new city;
    city *z = new city;
    z = head;
    z->name = citiesEast[0];
    for(int i = 1; i < 4; i++){
        temp = addCity(z,citiesEast[i]);
        z = temp;
        temp = temp->next;
        //x = temp;
    }

    return;
}
*/
