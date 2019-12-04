// CS1300 Fall 2019
// Author: Tiger McDaniel
// Recitation: 102 - Matthew Luebbers
// Project3: user.cpp

/*
* user.cpp is going to implement the user.h class 
*/

#include "user.h"
#include <string>
#include <iostream> 

using namespace std;

user::user(){
    
}

string user::getName(){
    return name;
}

void user::setName(string n){
    name = n;
}

