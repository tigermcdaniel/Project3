// CS1300 Fall 2019
// Author: Tiger McDaniel
// Recitation: 102 - Matthew Luebbers
// Prject3: pirate.h

/*
* pirate.h is a Header file to define all the funcitons to be later implemented
* it'll store their name and trivia and be able to perform a battle bewteen user and pirate 
*/

#ifndef PIRATE_H
#define PIRATE_H
#include <string>
#include "user.cpp"
#include <vector>\

using namespace std;

class pirate{
    public: 
        pirate();
        
        //print out the trivia for that index in the vector and return correct answer
        char printTrivia(int);
        
        //return the name of the pirate 
        string getName();
        
        //set the name of the pirate 
        void setName(string);
        
        //battle will call printTrivia to make them battle and keep score
        //will return 0 if lose and 1 is won. 
        int battle(user);
        
        //readPirate will read in the specific pirate from a file 
        void readPirate(string);
        
    private: 
        string name;
        vector<vector<string>> triviaQuestions;
        vector<char> triviaAnswers;
};
#endif