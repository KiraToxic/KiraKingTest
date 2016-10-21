/* Robot Bomb Game*/
/* Khoi Le, 650951708, kle109Hw4*/
/* Function: Make robot find bomb*/
#include <iostream>
#include <cstdlib>

using namespace std;

    int main() {
        srand(static_cast <unsigned int> (time(0)));
        int botGuess = rand() % 99+2+1; 
        int max = 99;
        int min = 2;
        char ready;
        char highLowSuccess;
        bool success;
        int tries = 0;  
        cout << "Place bomb in room number 1 - 100!\n";
        cout << "Are you ready? (y/n)\n\n";
        cin >> ready;
        while (ready == 'y') {
            cout << "Is it in room #" << botGuess << "?\n\n";
            cout << "Was "<< botGuess << ":(h)igh, (l)ow or (c)orrect? (h/l/c): ";
            ++tries;
            cin >> highLowSuccess;                                   
            if (highLowSuccess == 'h' && botGuess != 2) {
                max = botGuess - 1;                                 
                botGuess = rand() % max +1;                        
                success = false;
            }
			else if (highLowSuccess == 'h' && botGuess == 2) {
                cout << "Its must be in room 1!\nThat only took me " << tries << " tries.\n";
                success = true;
				break;
				ready == 'n';    
				cout << "Please pick a number between 1 - 100.\n\n";
				cout << "Replay? (y/n)\n\n";
				cin >> ready;				
            }
            else if (highLowSuccess == 'l' && botGuess != 99) {   
                min = botGuess + 1;                                 
                botGuess = rand()%(max-min + 1) + min;;
                success = false;
            }
			else if (highLowSuccess == 'l' && botGuess == 99) {   
                cout << "Its must be in room 100!\nThat only took me " << tries << " tries.\n";
                success = true;
				break;
				ready == 'n';
				cout << "Please pick a number between 1 - 100.\n\n";
				cout << "Replay? (y/n)\n\n";
				cin >> ready;
            }
            else if (highLowSuccess == 'c') {                        
                cout << "That only took me " << tries << " tries.\n";
                success = true;
				ready == 'n';
				cout << "Please pick a number between 1 - 100.\n\n";
				cout << "Replay? (y/n)\n\n";
				cin >> ready;
			}
		}
		return 0;
    }
