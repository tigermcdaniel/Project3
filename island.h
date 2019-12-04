// CS1300 Fall 2019
// Author: Tiger McDaniel
// Recitation: 102 - Matthew Luebbers
// Prject3: island.h

/*
* island.h is a Header file to define all the funcitons to be later implemented
* it will store what is on the island 
* if there is a pirate and if there is treasure 
* some islands will give hints or display a little clip of the map for the user
*/

#ifndef ISLAND_H
#define ISLAND_H
#include <string>
#include "pirate.cpp"

using namespace std;

class island{
    public: 
        island();
        bool islandHasPirate();
        bool hasTreasure();
        void setTreasure(bool);
        int getBonusPoints();
        void setBonusPoints(int);
        string getHint();
        void setHint(string);
        bool isOcean();
        void setOcean(bool);
        void setPirate(pirate);
        void setVisited(bool);
        bool getVisited();
        pirate getPirate();
    private: 
        //if there is a pirate on the island 
        pirate p;
        bool hasPirate;
        bool treasure;
        bool ocean;
        //return if there are bonus points for that island
        int bonusPoints;
        //if this island stores a hint
        string hint;
        bool visited;
};
#endif