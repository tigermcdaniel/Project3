// CS1300 Fall 2019
// Author: Tiger McDaniel
// Recitation: 102 - Matthew Luebbers
// Prject3: pirate.cpp

#include "pirate.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

/*
* pirates are going to be randomly placed on specific islands 
* if the sailor happens upon an island that has a pirate on it then they battle
* a battle will look like trivia questions that result in the pirate winning or 
* the salor losing 
*/

/*
* pirate constructor 
*/
pirate::pirate(){
    
}

/*
* getName returns the name of the pirate
*/
string pirate::getName(){
    return name;
}

/*
* getName resets the name to the given input 
*/
void pirate::setName(string n){
    name = n;
}

/*
* battle will battle the pirate with the user and
* return 0 if the user lost and 1 if the user won 
*/
int pirate::battle(user u){
    int score = 0;
    cout << "Oh no! You landed on an island with a pirate on it!\n" << endl;
    cout << "Now you must battle through trivia to go on. " << endl;
    
    for(int c = 0; c < 5; c++){
        for(int i = 0; i < triviaQuestions.length(); i++){
            for(int a = 0; a < triviaQuestions<i>.length(); a++){
                cout << triviaQuestions<i><a> << endl;
            }
        }
        
        char ans;
        cin << ans;
        
        if(ans == triviaAnswers){
            //they got it right 
            score ++;
        }
    }
    
    if(score < 3){
        //they lost 
        cout << "The Pirate Won !" << endl;
        return 0;
    }else {
        cout << "Congradulations !! You beat the pirate and may continu on your quest!" << endl;
        return 1;
    }
}

/*
* readPirate will take a file name in and read in that pirate 
* format goes:
*   name
*   (correct answer)
*   question ?
*   options X 4 (a. b. c. d.)
*   ....
*   each pirate has 5 questions of similar themes 
*/
void pirate::readPirate(string fileName){
    ifstream myFile; 
    myFile.open(fileName);
    
    if(myFile.is_open()){
        
        string line;
        
        //set the name
        getline (myFile, line);
        name = line;
        
        //Resets a question/answer every 5 index increments 
        int column = 0;
        int row = 0;
        vector<string> nextCol;
        //set the question and answers
        while(getline(myFile, line)){
            //this is the correct answer: char
            if(row == 0){
                triviaAnswers.push_back(line[0]);
                row++;
            }else {
                //this is one of the 
                if(row == 5){
                    //add the whole next vector
                    nextCol.push_back(line);
                    triviaQuestions.push_back(nextCol);
                    
                    //go to the next column
                    column ++;
                    row = 0;
                    
                    while(!nextCol.empty()){
                        nextCol.pop_back();
                    }
                }else{
                    nextCol.push_back(line);
                    
                    column ++;
                    row ++;
                }
            }
        }
        
        //cout << "end of pirate file" << endl;
    }
}










