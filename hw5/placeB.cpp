/* Robot Bomb Game*/
/* Khoi Le, 650951708, kle109Hw4*/
/* Function: Make robot find bomb*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
 {
    srand(static_cast <unsigned int> (time(NULL)));
	int max = 0;
    int min = 2;
    int botGuess = rand() % (max - min + 1 ) +min; 
    string ready = "";
    char highLowSuccess;
    bool success;
    int tries = 0;
    int maxTries;
	bool repeat = true;
			
		// input checks
	while (repeat = true) {
		cout << "Are you ready? (yes/no)\n";
		cin >> ready;
		if (ready == "no") {
			break;
		}
		cout << "How many rooms are in the building?\n";
		cin >> max;
		cout << "Place bomb in room number 1 - "<< max <<"!\n";
		cout << "How many tries do I get?\n";
		cin >> maxTries;

        while (ready == "yes") {
            cout << "Is it in room #" << botGuess << "?\n\n";
            cout << "Is room "<< botGuess << ":(h)igh, (l)ow or (c)orrect? (h/l/c): ";
            ++tries;
            cin >> highLowSuccess;
            if (highLowSuccess == 'h' && botGuess != min) {
                max = botGuess - 1;
                botGuess = rand() % max +1;
            }
            else if (highLowSuccess == 'h' && botGuess == min) {
                cout << "Its must be in room 1!\nThat only took me " << tries << " tries.\n\n";
				break;
            }
            else if (highLowSuccess == 'l' && botGuess != max){
                min = botGuess + 1;
                botGuess = rand()%(max-min + 1) + min;	
            }
            else if (highLowSuccess == 'l' && botGuess == max - 1) {
                cout << "Its must be in room "<< max <<"!\nThat only took me " << tries << " tries.\n\n";
				break;
            }
            else if (highLowSuccess == 'c') {
                cout << "That only took me " << tries << " tries.\n";
                break;
            }
			if (tries == maxTries) {
                cout << "I'm out of tries, I GIVE UP!\n";
                break;
            }
		}
	}
    return 0;
}