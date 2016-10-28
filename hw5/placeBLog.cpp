/* Robot Bomb Game*/
/* Khoi Le, 650951708, kle109Hw4*/
/* Function: Make robot find bomb*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h> 
#include <stdlib.h>
using namespace std;

int main()
 {
    srand(static_cast <unsigned int> (time(NULL)));
	int max = 99;
    int min = 2;
    int botGuess = rand() % (max - min + 1 ) +min; 
    char ready = 'y';
    char highLowSuccess;
    bool success;
    int tries = 0;
    int maxTries;
	bool repeat = true;
	int*[3] arr;
	int i;
	for(int i = 0; i < 3; i++)
		arr[i] = malloc(sizeof(int*) * 3);


			
	// input checks
	while (repeat = true) {

		cout << "Are you ready? (y/n)\n";
		cin >> ready;
		if (ready == 'n')
		{
			break;
		}
		cout << "Place bomb in room number 1 - 100!\n";
		cout << "How many tries do I get?\n";
		cin >> maxTries;

        while (ready == 'y')
			{
            cout << "Is it in room #" << botGuess << "?\n\n";
            cout << "Is room "<< botGuess << ":(h)igh, (l)ow or (c)orrect? (h/l/c): ";
            ++tries;
            cin >> highLowSuccess;
            if (highLowSuccess == 'h' && botGuess != 2) 
			{
                max = botGuess - 1;
                botGuess = rand() % max +1;
            }
            else if (highLowSuccess == 'h' && botGuess == 2) 
			{
                cout << "Its must be in room 1!\nThat only took me " << tries << " tries.\n\n";
				break;
            }
            else if (highLowSuccess == 'l' && botGuess != 99)
			{
                min = botGuess + 1;
                botGuess = rand()%(max-min + 1) + min;	
            }
            else if (highLowSuccess == 'l' && botGuess == 99) 
			{
                cout << "Its must be in room 100!\nThat only took me " << tries << " tries.\n\n";
				break;
            }
            else if (highLowSuccess == 'c') 
			{
                cout << "That only took me " << tries << " tries.\n";
                break;
            }
			if (tries == maxTries) 
			{
                cout << "I'm out of tries, I GIVE UP!\n";
                break;
            }
		}
	}
		for (i = 0; i <= maxTries; i++)
		{
			for (j = 0; j <= maxTries; j++)
			{
				A[i][j] = botGuess;
				cout << A[i][j] <<"  "<< endl;
			}
		}
    return 0;
}
