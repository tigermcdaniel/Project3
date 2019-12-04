// CS1300 Fall 2019
// Author: Tiger McDaniel
// Recitation: 102 - Matthew Luebbers
// Project 3: game.cpp

#include "map.cpp"
#include <iostream>
#include<stdio.h> 
//#include <graphics.h>
//#include <dos.h>
//#include <conio.h>

using namespace std;

/*
* game.cpp is going to run the entire game and take a player through steps to 
* complete the game 
*/

int main(){
    //clrscr();
    
    //Read in the pirates and store them as object in the map.cpp file 
    pirate p1;
    pirate p2;
    pirate p3;
    pirate p4;
    pirate p5;
    p1.readPirate("pirate1.txt");
    p2.readPirate("pirate2.txt");
    p3.readPirate("pirate3.txt");
    p4.readPirate("pirate4.txt");
    p5.readPirate("pirate5.txt");
    
    //store the pirates in map so map can use them 
    map m;
    m.addPirate(p1);
    m.addPirate(p2);
    m.addPirate(p3);
    m.addPirate(p4);
    m.addPirate(p5);
    
    //make a 2D 'map' of islands and drops some pirates down in the mix 
    m.newGame();
    
    /*
    * Prompt the user on their situation 
    * 
    * "You're a sailor carrying precious cargo across the Indian Ocean when you're 
    *  attacked by some pirates !!"
    * 
    * "Now you must go in search of your booty which the mischeivious pirates 
    * have buried somewhere in the scattered islands !"
    * 
    * "Best of luck matey !"
    */
    cout << "You're a sailor carrying precious cargo across the Indian Ocean when you're attacked by some pirates !!\n" << endl;
    //delay(2000);
    cout << "Now you must go in search of your booty which the mischeivious pirates have buried somewhere in the scattered islands !\n" << endl;
    //delay(2000);
    cout << "Here is a quick view of a map, try to remember as much as you can and best of luck ! \n" <<  endl;
    //delay(2000);
    //getch();
    
    
    int ans = 0;
    
    while(ans != 3){
        //take them though the menu until they want to quit
        char input;
        cout << "Welcome Matey! What would you like to do next? (enter a single number) " << endl;
        cout <<  "1. Play a New Game" << endl;
        cout << "2. See High Scores" << endl;
        cout << "3. Quit" << endl;
        
        cin >> input;
        
        try(input.stoi()){
            //it worked ! that was an answer
            ans = input.stoi();
            switch(ans){
                case 1: 
                    //play a new game 
                    playGame();
                    break;
                case 2:
                    //print the high scores 
                    m.printHighScores();
                    break;
                case 3:
                    //quit;
                    break;
            }
            
        }else {
            cout << "Invalid Input. Try Again." << endl;
        }
    }
    
    
    m.printMap();
    
    //End -- writing the score to a file with 'username'
}

void printMenu(){
    cout << "Menu:" << endl;
    cout << "q = quit" << endl;
    cout << "d = move right" << endl;
    cout << "a = move left" << endl;
    cout << "s = move down" << endl;
    cout << "w = move up" << endl;
}

/*
* playGame is going to start a new game and take the user through it 
*/
void playGame(){
    //clear the board
    m.newGame();
    
    //set this users name
    cout << "Please enter your name: " << endl;
    stirng name = cin.getline();
    user u;
    u.setName(name);
    
    printMenu();
    
    char choice = c;
    
    while(choice != 'q'){
        printGameOptions();
        cin >> choice;
        
        switch(choice){
            case 'd':
                //move right 
                if(m.moveRight() == 0){
                    cout << "Unable to complete move. Please try again." << endl;
                }else {
                    u.setMoves(e.getMoves() + 1);
                }
                
                //then they battle 
                if(m.hasPirate()){
                    
                }
                
                if(checkWin() == 1){
                    choice = 'q';
                }
                
                break;
            case 'a': 
                //move left
                if(m.moveLeft() == 0){
                    cout << "Unable to complete move. Please try again." << endl;
                }else {
                    u.setMoves(e.getMoves() + 1);
                }
                
                m.hasPirate();
                if(checkWin() == 1){
                    choice = 'q';
                }
                
                break;
            case 's':
                //move down 
                if(m.moveDown() == 0){
                    cout << "Unable to complete move. Please try again." << endl;
                }else {
                    u.setMoves(e.getMoves() + 1);
                }
                
                m.hasPirate();
                if(checkWin() == 1){
                    choice = 'q';
                }
                
                break;
            case 'w':
                //move up
                if(m.moveUp() == 0){
                    cout << "Unable to complete move. Please try again." << endl;
                }else {
                    u.setMoves(e.getMoves() + 1);
                }
                
                m.hasPirate();
                if(checkWin() == 1){
                    choice = 'q';
                }
                
                break;
            default:
                cout << "Invalid Input. Please try again." << endl;
                break;
        }
    }
}

void printGameOptions(){
    cout << "Make your next move:" << endl;
    cout << "d = move right (-->)" << endl;
    cout << "a = move left (<--)" << endl;
    cout << "s = move down" << endl;
    cout << "w = move up" << endl;
    cout << "q = quit. " << endl;
}

/*
 * Check if the user has won 
 */
int checkWin(){
    
}