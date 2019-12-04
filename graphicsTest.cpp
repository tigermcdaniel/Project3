#include <iostream>
#include "f_graph.cpp"

using namespace std;

int main(){
    //Test the f_graph.coo
    
	f_graph g;

	COLORREF COLOR = RGB(0, 0, 255);
	g.setColor(COLOR);

	cout << g.getDimensionX() << "\n and " << g.getDimensionY() << endl;

    return 0;
}