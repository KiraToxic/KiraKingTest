/* Bomb Game*/
/* Khoi Le, 650951708, kle109Hw4*/
/* Function: Bomb Game*/
#include <iostream>
#include <math.h>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

    int main()
    {
		srand(static_cast <unsigned int> (time(0)));
        int ibomb = rand() % 100 +1;
		int userGuess;
        int highestNumber = 100;
        int lowestNumber = 1;
        char ready;
        char highLowSuccess;
        bool success;
        int tries = 0;
		
		cout << "Wanna play? (y/n)\n\n";
        cin >> ready;
		    while (ready == 'y'){
			cout << "Room 1 - 100, where is it?\n";
			cin >> userGuess;
					}

	}