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
using namespace std;

void displayMenu();

int main() {
    /*
    string command;
    string startingCity;
    cout << "Where are you starting?" << endl;
    cin >> startingCity;
    RoadTrip x;
    displayMenu();
    getline(cin, command);
    while(command != '9'){
        if(command == '1'{
            x.addCity();
        }
        else if(command == '2'){
            x.printPath();
        }
        else if(command == '3'){
            string newCity;
            string prev;
            cout << "What city would you like to add?" << endl;
            cin >> newCity;
            cout << "What city would you like to add it after?" << endl;
            cin >> prev;
            x.insertCity(x->head, newCity, prev);
        }
        else if(command == '4'){
            string removedCity;
            cout << "What city would you like to remove?" << endl;
            cin >> removedCity;
            x.removeCity(x->head, removedCity);
        }
        else if(command == '5'){
            x.setThingToDo();
        }
        else if(command == '6'){
            x.printActivities();
        }
        else if(command == '7'){
            x.getCurrent();
        }
        else if(command == '8'){
            string city2Find;
            cout << "What city are you looking for?" << endl;
            cin >> city2Find;
            x.findCity(city2Find);
        }
        else {
            cout << "Invalid Selection Moron." << endl;
        }
        
        displayMenu();
        getline(cin, command);
    }
     */
    cout<<"Hello World"<<endl;
    return 0;
}

void displayMenu(){
    cout << "======= Main Menu =======" << endl;
    cout << "1. Add city" << endl;
    cout << "2. Print Path" << endl;
    cout << "3. Insert City" << endl;
    cout << "4. Remove City" << endl;
    cout << "5. Add things to do" << endl;
    cout << "6. Print Activities" << endl;
    cout << "7. Get Current City" << endl;
    cout << "8. Find City" << endl;
    cout << "9. Quit" << endl;
}
