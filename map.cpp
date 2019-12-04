// CS1300 Fall 2019
// Author: Tiger McDaniel
// Recitation: 102 - Matthew Luebbers
// Project3: map.cpp

/*
* map.cpp will implement the map.h file 
*/

#include "map.h"
#include <math.h>

using namespace std;

/*
* the map constructor will initialize the game funcitonality -- for first match 
*/
map::map(){
    userRow = -1;
    userCol = -1;
    newGame();
}

/*
* newGame will reset the board and store the high score(if necessary) for the next game
* make a 10 X 10 map and randomly place island on map 
*/
void map::newGame(){
    
    vector<island> column;
    
    //set each column and row of the map 
    for(int c = 0; c < 10; c ++){
        for(int r = 0; r < 10; r++){
            //initialize every other one to island/water just to start out 
            island isl;
            if(r % 2 == 0){
                isl.setOcean(true);
            }else {
                isl.setOcean(false);
            }
            column.push_back(isl);
        }
        board.push_back(column);
        
        while(!column.empty()){
            column.pop_back();
        }
    }
    
    //set the user's starting position to a random island 
    while(userRow != -1 && userCol != -1){
        int r = rand() % 10; // rand num from 0 to 9
        int c = rand() % 10; // rand num from 0 to 9
        
        if(board[c][r].isOcean() == false){
            userRow = r;
            userCol = c;
        }
    }
}

void map::addPirate(pirate p){
    pirates.push_back(p);
}

/*
* printMap will print out the map using graphics.h import for the user hints 
* but mainly for testing purposes 
*/
void map::printMap(){
    //for every column
    for(int c = 0; c < 10; c++){
        //print every row twice so there is two line of curlies of dashes 
        for(int i = 0; i < 2; i++){
            //for every row 
            for(int r = 0; r < 10; r++){
                if(board[c][r].isOcean()){
                    cout << "~~~~~";
                }else {
                    cout << "-----";
                }
            }
            cout << "\n";
        }
    }
}

/*
* finishGame will wrap up the game that was happening and store the high score if necessary 
*/
void map::finishGame(){
    
}

void map::printHighScores(){
    cout << "High Scores:" << endl;
    for(int i = 0; i < highScores.length(); i++){
        string name = highScores[i];
        if(name == ""){
            continue;
        }else{
            cout << (i+1) << ". " << name << endl;
        }
    }
}

void map::setUserRow(int r){
    row = r;
}

void map::setUserCol(int c){
    col = c;
}

int map::getUserRow(){
    return row;
}

int map::getUserCol(){
    return col;
}

//reutrn 1 if move was made and 0 if not possible 
int map::moveRight(){
    if(col >= 0 && col < 9 && ){
        col += 2;
        board<col><row>.setVisited(true);
        return 1;
    }else {
        return 0;
    }
}

int map::moveLeft(){
    if(col >= 2 && col <= 9){
        col -= 2;
        board<col><row>.setVisited(true);
        return 1;
    }
}

int map::moveUp(){
    if(row <= 2 && row >= 9){
        row += 2;
        board<col><row>.setVisited(true);
        return 1;
    }else {
        return 0;
    }
}

int map::moveDown(){
    if(row >= 0 && row > 8){
        row -= 2;
        board<col><row>.setVisited(true);
        return 1;
    }else {
        return 0;
    }
}

bool hasPirate(){
    return board<col><row>.islandHasPirate();
}

bool battlePirate(user u){
    pirate p = board<col><row>.getPirate();
    p.battle(u);
}

pirate getPirate(){
    if(board<col><row>.hasPirate()){
        return board<col><row>.getPirate();
    }else {
        return null;
    }
}
