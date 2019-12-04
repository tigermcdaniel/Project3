// CS1300 Fall 2019
// Author: Tiger McDaniel
// Recitation: 102 - Matthew Luebbers
// Project3: map.h

/*
* map.h is a Header file to define all the funcitons to be later implemented
* it will store a map for the user 
* it also will initialize the map and store the users position 
*/

#ifndef MAP_H
#define MAP_H
#include <string>
#include "island.cpp"

using namespace std;

class map{
    public: 
        //initialize the map functonality
        map();
        
        //print out the map for the user
        void printMap();
        
        //finsih up the game and write the output to a file
        void finishGame();
        
        //intitalize the map and all things on the islands
        void newGame();
        void addPirate(pirate);
        void printHighScores();
        
        void setUserRow(int);
        void setUserCol(int);
        
        int getUserRow();
        int getUserCol();
        
        //if move was made return 1 else return 0
        int moveRight();
        int moveLeft();
        int moveUp();
        int moveDown();
        
        //returns if the current island has a pirate on it or not 
        bool hasPirate();
        pirate getPirate();
    private:
        //store the top 5 usernames and high scores
        vector<string> usernames;
        vector<int> highScores;
        
        vector<vector<island>> board;
        vector<pirate> pirates;
        
        int col;
        int row;
};
#endif