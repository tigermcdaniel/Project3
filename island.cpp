// CS1300 Fall 2019
// Author: Tiger McDaniel
// Recitation: 102 - Matthew Luebbers
// Project 3: island.cpp

#include "island.h"
#include <string>
#include <iostream>

using namespace std;

/*
* island is going to be placed somewhere on the map 
* the sailor is going to traverse the islands to find their stolen treasure 
*/

island::island(){
    ocean = false;
    hint = "";
    hasPirate = false;
    treasure = false;
    bonusPoints = 0;
    visited = false;
}

void island::setPirate(pirate pir){
    p = pir;
    hasPirate = true;
}

bool island::islandHasPirate(){
    return hasPirate;
}

void island::setOcean(bool o){
    ocean = o;
}

bool island::isOcean(){
    return ocean;
}

string island::getHint(){
    return hint;
}

bool island::hasTreasure(){
    return treasure;
}

void island::setTreasure(bool t){
    treasure = t;
}

void island::setHint(string h){
    hint = h;
}

void island::setBonusPoints(int p){
    bonusPoints = p;
}

int island::getBonusPoints(){
    return bonusPoints;
}

bool island::getVisited(){
    return visited;
}

void island::setVisited(bool v){
    visited = v;
}

pirate island::getPirate(user u){
    return p;
}
