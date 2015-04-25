//
//  RoadTrip.cpp
//  FinalProjectCSCI2270
//
//  Created by Nolawee Mengist on 4/20/15.
//  Copyright (c) 2015 nope. All rights reserved.
//

#include "RoadTrip.h"
#include <string>
#include <iostream>
#include <fstream>

city* addCity(city* previous, string cityName)
{
	city* n = new city;
	n->name = cityName;
	previous->next = n;
	return n;
}

void insertCity(city *head, string newCity, string previousCity)
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

void removeCity(city* head, string deletedCity)
{
	city *n = new city;
	city *p = new city;

	n = head;
	p = head;
	while(p->next != NULL)
	{
		if(n->name == deletedCity)
		{
			p->next = n->next;
			delete n;
			break;
		}
		else{
			p = n;
			n = n->next;
		}
	}
}

void setThingsToDo(){
	cout << "What would you like to do in " << current->name << "?" << endl;
	cout << "You may add up to 5 activities." << endl;
	int i = 0;
	string command;
	while(i < 5 || command != nothing){
		getline(cin, command);
		current->ThingsTodo[i];
		cout << "Add another activity or type 'nothing' to finish adding." << endl;
		i++;
	}
}

void printActivities(){
	string cityName;
	cout << "Which city's activities would you like to print?" << endl;
	getLine(cin, cityName);
	
	city *n = new city;
	n = head;
	while(n != NULL){
		if(n->name == cityName){
			break
		}
		n = n->next;
	}
	
	if(n->name != cityName){
		cout << "City is not on path." << endl;
		printActivities();
	}
	
	else if (n->name == cityName){
		for(int i = 0; i < 5; i++){
			cout << i+1 << ". " << n->ThingsToDo[i] << endl;
		}
	}
}
