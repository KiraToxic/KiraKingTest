/* Bomb Game*/
/* Khoi Le, 650951708, kle109Hw4*/
/* Function: Bomb Game*/
#include <iostream>
#include <math.h>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;
void intro() 
{
	cout << "" << endl;
    cout << "Program: DisArm The BOMB.\n";
    cout << "Info: Khoi Le, kle109Hw5. \n";
    cout << "Game: Find one of 6 terminals to disarm the bomb hidden in the building.\n";
    cout << endl;
}

    int main()
    {
		srand(static_cast <unsigned int> (time(0)));
		char ready;
      	int max = 100;
		int min = 1;
		int userGuessx;
		int userGuessy;
		int userGuessz;
		int signal;
        int highestNumber = 100;
        int lowestNumber = 1;
        int tries = 0;
		int boomx = rand() % (max - min + 1 ) +min;
		int boomy = rand() % (max - min + 1 ) +min;
		int boomz = rand() % (max - min + 1 ) +min;
		intro();
		ready = 'y';
		    while (ready == 'y')
			{

				while(signal != 1000)
				{
					cout << "Cordinate x's range: (1-100) \n" <<endl;
					cout << "User's x guess: \n";
					cin >> userGuessx;
					while (userGuessx < 1 || userGuessx > 100) 
					{
						cout << "Cordinate x's range: (1-100) \n";
						cout << "User's x guess: \n";
						cin >> userGuessx;
					}
					cout << "Cordinate y's range: (1-100) \n" <<endl;
					cout << "User's y guess: \n";
					cin >> userGuessy;
					while (userGuessy < 1 || userGuessy > 100) 
					{
						cout << "Cordinate y's range: (1-100) \n";
						cout << "User's y guess: \n";
						cin >> userGuessy;
					}
					cout << "Cordinate z's range: (1-100) \n" <<endl;
					cout << "User's z guess: \n";
					cin >> userGuessz;
					while (userGuessz < 1 || userGuessz > 100) 
					{
						cout << "Cordinate z's range: (1-100) \n";
						cout << "User's z guess: \n";
						cin >> userGuessz;
					}	
				cout << "User guess: ("<<userGuessx << ", " << userGuessy << ", " << userGuessz << ")" << endl;
				signal = 1000 * (1 - (pow((pow((userGuessx -boomx),2) + pow((userGuessy -boomy),2) +pow((userGuessz -boomz),2)),.5) / (100 *(pow(3,.5)))));
				cout << "Bomb signal: " << signal << endl;
					if (signal != 1000)
					{
					cout << "try agian. \n";
					//location for testing
					cout << "Bomb location: ("<< boomx << ", " << boomy << ", " << boomz << ")" << endl;
					}		
				}
			cout << "You disarmed the bomb \n";
			cout << "Wanna play again? (y/n)\n";
			cin >> ready;
				if(ready == 'y')
				{
				signal = 0;	
				}
				else
				{
				break;
				}	
			}
	}
	
	