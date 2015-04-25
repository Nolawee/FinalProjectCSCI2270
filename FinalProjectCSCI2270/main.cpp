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
            
        }
        else if(command == '2'){
            
        }
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
