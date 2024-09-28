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
    int spaceLocation = name.find(" ");
    for(int i = 0; i < name.size(); i++){
        if(i == spaceLocation){
            frontNum = 2;
            cout << "\n"; 
            count ++;
            continue;
        }
        cout << frontNum; 
        if(frontNum >= 10){
            printSpaces(count -1);
        } else {
            printSpaces(count);
        }
        cout << char(toupper(name[i])) << endl;
        frontNum += 2;
        count ++;
    }
}

int main(){
    string name;
    cout << "Please enter your name: " << endl;
    getline(cin, name);
    process(name);
    
    
    return 0;
}