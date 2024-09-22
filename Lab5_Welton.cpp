/*
Name: Lab5_Welton
Author: Christopher Welton
Description: This program plays the 'Game of Nim' with the computer and human player 
*/
#include <iostream>
#include <string>

using namespace std;

void printSpaces(int spaces){
    for(int i=0; i<spaces; i++){
        cout << " ";
    }
}

void process(string name){
    int count = 1;
    int frontNum = 1;
    int spaceLocation = name.find(' ');
    cout << "Space location " << spaceLocation << endl;
    for(int i = 0; i < name.size(); i++){
        if(i == spaceLocation){
            frontNum = 2;
        }
        if(frontNum >= )
        cout << frontNum; 
        printSpaces(count);
        cout << char(toupper(name[i])) << endl;
        frontNum += 2;
        count ++;
    }
}

int main(){
    string name;
    cout << "Please enter your first and last name separated by a space: " << endl;
    getline(cin, name);
    cout<< "The name input was : " << name;
    process(name);
    
    
    return 0;
}