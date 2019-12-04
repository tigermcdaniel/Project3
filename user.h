// CS1300 Fall 2019
// Author: Tiger McDaniel
// Recitation: 102 - Matthew Luebbers
// Project3: user.h

/*
* user.h is a Header file to define all the funcitons to be later implemented
* this is going to store the users info and give to the the map when it needs to write to a file
*/

#ifndef USER_H
#define USER_H
#include <string>

using namespace std;

class user{
    public:
        user();
        string getName();
        void setName(string);
        int getMoves();
        void setMoves(int);
    private:
        string name;
        int moves;
};
#endif