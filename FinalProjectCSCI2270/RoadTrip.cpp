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