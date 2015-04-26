//
//  main.cpp
//  FinalProjectCSCI2270
//
//  Created by Nolawee Mengist on 4/19/15.
//  Copyright (c) 2015 nope. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include "RoadTrip.h"
using namespace std;

void displayMenu();

int main(int argc, char *argv[]) {
    /*
    city* head = new city;
    string command;
    string startingCity = "Dublin";
    //string cities[10];
    //cout << "Where are you starting?" << endl;
    //cin >> startingCity;
    RoadTrip x(startingCity);
    
    while(command != "9"){
        cout<<"before"<<endl;
        displayMenu();
        cout<<"after"<<endl;
        getline(cin, command);
        if(command == "1"){
            string newCity;
            cout<<"What city would you like to add?"<<endl;
            cin >> newCity;
            cout<<newCity<<endl;
        }
        else if(command == "2"){
            //x.printPath();
            cout<<"stuff"<<endl;
        }
        else if(command == "3"){
            string newCity;
            string prev;
            cout << "What city would you like to add?" << endl;
            cin >> newCity;
            cout << "What city would you like to add it after?" << endl;
            cin >> prev;
            x.insertCity(head, newCity, prev);
        }
        else if(command == "4"){
            string removedCity;
            cout << "What city would you like to remove?" << endl;
            cin >> removedCity;
            x.removeCity(head, removedCity);
        }
        else if(command == "5"){
            //x.setThingsToDo();
            cout<<"stuff"<<endl;
        }
        else if(command == "6"){
            //x.printActivities();
            cout<<"stuff"<<endl;
        }
        else if(command == "7"){
            //x.getCurrent();
            cout<<"stuff"<<endl;
        }
        else if(command == "8"){
            string city2Find;
            cout << "What city are you looking for?" << endl;
            cin >> city2Find;
            //x.findCity(city2Find);
            cout<<"stuff"<<endl;
        }

    }
    return 0;
     */
    string command;
    
    string citiesWest[4] = {"Los Angeles", "San Francisco", "Seattle", "Denver"};
    
    string citiesEast[4] = {"New York", "Washington D.C.","Boston", "Philidelphia"};
    city* head = new city;
    string startingCity = "Placeholder";
    RoadTrip x(startingCity);
    displayMenu();
   
    getline(cin, command);
    while( command != "9"){
        
        if( command == "1"){
            cout<<"Would you like to start your trip on the East or West coast (Answer 'East' or 'West')?"<<endl;
            string newCity;
            getline(cin,newCity);
            if (newCity == "West") {
                city* temp = new city;
                city* z = new city;
                z = head;
                z->name = citiesWest[0];
                for (int i = 0; i < 4; i++) {
                    temp = x.addCity(z, citiesWest[i]);
                    z = temp;
                    temp = temp->next;
                }
            }else if (newCity == "East"){
                city* temp = new city;
                city* z = new city;
                z = head;
                z->name = citiesEast[0];
                for (int i = 0; i < 4; i++) {
                    temp = x.addCity(z, citiesEast[i]);
                    z = temp;
                    temp = temp->next;
                }
            }
            
            x.printPath(head);
        }
        
        else if( command == "2"){
            x.printPath(head);
            
        }
        
        else if( command == "3"){
            
            //cout<<"stuff"<<endl;
            cout<<"What city would you like to add?"<<endl;
            string newCity;
            getline(cin,newCity);
            cout<<"What city will come before the new city"<<endl;
            string prevCity;
            getline(cin,prevCity);
            x.insertCity(head, newCity, prevCity);
        }
        
        else if( command == "4"){
            cout<<"What city would you like to delete?"<<endl;
            string deletedCity;
            getline(cin,deletedCity);
            x.removeCity(head, deletedCity);
        }
        
        else if( command == "5"){
            cout<<"stuff"<<endl;
        }
        
        else if( command == "6"){
            cout<<"stuff"<<endl;
        }
        
        else if( command == "7"){
            cout<<"stuff"<<endl;
        }
        
        else if( command == "8"){
            cout<<"stuff"<<endl;
        }
        
        else{
            cout << "Invalid Selection" << endl;
        }
        displayMenu();
        getline(cin, command);
    }
    cout << "Goodbye!" << endl;
    return 0;
}

void displayMenu(){
    cout << "======= Main Menu =======" << endl;
    cout << "1. Choose Starting Template (Build Path)" << endl;
    cout << "2. Print Path" << endl;
    cout << "3. Insert City" << endl;
    cout << "4. Remove City" << endl;
    cout << "5. Add things to do" << endl;
    cout << "6. Print Activities" << endl;
    cout << "7. Get Current City" << endl;
    cout << "8. Find City" << endl;
    cout << "9. Quit" << endl;
}
