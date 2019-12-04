#include "map.cpp"
#include <string>
#include <iostream>

using namespace std;

/*
* to test the map funciton and make sure it prints ok 
*/
int main(){
    cout << "made it to the start of mapDriver.cpp" << endl;
    
    map m;
    m.newGame();
    m.printMap();
    
    cout << "made it to the end of mapDriver.cpp" << endl;
}