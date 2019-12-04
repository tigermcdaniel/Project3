// CS1300 Fall 2019
// Author: Tiger McDaniel
// Recitation: 102 - Matthew Luebbers
// Prject3: pirate.cpp

#include "pirate.cpp"
#include <string>
#include <iostream>

using namespace std;

//To test the pirate class 
int main(){
    cout << "in main of pirateDriver.cpp" << endl;
    //read in a pirate 
    pirate p;
    p.readPirate("pirate1.txt");
    cout << p.getName() << endl;
    
    return 1;
}