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
    srand(static_cast<unsigned int>(time(0)));
    //srand(time(NULL));
    string ready = "";
    bool won = false, repeat = false;
    int max = 99;
    int min = 0;
    int maxTries = 1;
    int size = maxTries + 2;
    int userGuessx;
    int userGuessy;
    int userGuessz;
    int signal;
    int highestNumber = 99;
    int lowestNumber = 0;
    int tries = 0;
    int boomx = rand() % (max - min + 1) + min;
    int boomy = rand() % (max - min + 1) + min;
    int boomz = rand() % (max - min + 1) + min;
    int loopVar = 0;
    int** arr = (int**)malloc(sizeof(int*) * size);
    for (int loopVar = 0; loopVar < size; loopVar++) {
        arr[loopVar] = (int*)malloc(sizeof(int) * size);
    }
    int i = 0;
    do {
		cout << "\nStarting tries for user: \n ";
		cin >> maxTries;
		cout << "Hey, you have " << maxTries * 10 << " seconds left to locate the bomb" << endl;
		cout << "Number of Tries left: " << maxTries << " Tries." << endl;
        for (int i = 0; i < maxTries; i++) {
            cout << "\nx guess: \n";
            cin >> userGuessx;
            arr[i][0] = userGuessx;
            while (userGuessx < lowestNumber || userGuessx > highestNumber) {
                cout << "Please mind x range: (0-99) \n";
                cout << "x guess: \n";
                cin >> userGuessx;
                arr[i][0] = userGuessx;
            }
            cout << "y guess: \n";
            cin >> userGuessy;
            arr[i][1] = userGuessy;
            while (userGuessy < lowestNumber || userGuessy > highestNumber) {
                cout << "Please mind y range: (0-99) \n";
                cout << "y guess: \n";
                cin >> userGuessy;
                arr[i][1] = userGuessy;
            }
            cout << "z guess: \n";
            cin >> userGuessz;
            arr[i][2] = userGuessz;
            while (userGuessz < lowestNumber || userGuessz > highestNumber) {
                cout << "Please mind z range: (0-99) \n";
                cout << "z guess: \n";
                cin >> userGuessz;
                arr[i][2] = userGuessz;
            }
            cout << "User guess: (" << userGuessx << ", " << userGuessy << ", " << userGuessz << ")" << endl;
            signal = 1000 * (1 - (pow((pow((userGuessx - boomx), 2) + pow((userGuessy - boomy), 2) + pow((userGuessz - boomz), 2)), .5) / (100 * (pow(3, .5)))));
            cout << "Bomb signal: " << signal << endl;
            if (signal != 1000) {
                cout << "try agian. \n";
                //location for testing
                cout << "Bomb location: (" << boomx << ", " << boomy << ", " << boomz << ")" << endl;
            }
			else if (maxTries >= tries) {
				won = false;
                break;
            }
            else {
                won = true;
                break;
            }
            cout << "Last Guesses are: " << endl;
            for (loopVar = 0; loopVar < i + 1; loopVar++) {
                cout << "( ";
                for (int j = 0; j < 3; j++) {
                    cout << arr[loopVar][j] << " ";
                }
                cout << ")" << endl;
            }
        }
        if (won == true) {
            cout << "Congrats! you have located the bomb!" << endl;
            maxTries--;
        }
        else if (won == false) {
			cout << "____________________________________________________________________________________________________________________\n";
			cout << "|||--------------------------------------------------------------------------------------------------------------|||\n";
			cout << "|||-------###----##########---------#######------------#######-----------###------------####----###--------------|||\n";
			cout << "|||-------###----###------##-------###----###---------###----###---------#####---------#####----###--------------|||\n";
			cout << "|||-------###----###------##------###------###-------###------###--------###-###------######----###--------------|||\n";
			cout << "|||-------###----###------##-----###--------###-----###--------###-------###--###----###-###----###--------------|||\n";
			cout << "|||-------###----##########------###--------###-----###--------###-------###---###-###---###----###--------------|||\n";
			cout << "|||-------###----###------##-----###--------###-----###--------###-------###-----###-----###----###--------------|||\n";
			cout << "|||-------###----###-------##----###--------###-----###--------###-------###-------------###----###--------------|||\n";
			cout << "|||--------------###-------##-----###------###-------###------###--------###-------------###---------------------|||\n";
			cout << "|||-------###----###-------##------###----###---------###----###---------###-------------###----###--------------|||\n";
			cout << "|||-------###----###########---------#######-----------#######-----------###-------------###----###--------------|||\n";
			cout << "|||--------------------------------------------------------------------------------------------------------------|||\n";
			cout << "|||______________________________________________________________________________________________________________|||\n";
            cout << "You died!" << endl;
			cout << "Bomb location was: (" << boomx << ", " << boomy << ", " << boomz << ")" << endl;
            maxTries++;
			//maxTries += 1;
			//maxTries = maxTries + 1;
        }
        cout << "Wanna play again? (yes/no)\n";
        cin >> ready;
		
        //TODO: make the following a while loop
        if (ready == "yes") {
            signal = 0;
            repeat = true;
            won = false;
            boomx = rand() % (max - min + 1) + min;
            boomy = rand() % (max - min + 1) + min;
            boomz = rand() % (max - min + 1) + min;
        }
        else if (ready == "no") {
            repeat = false;
            break;
        }
        else {
			cout << "Wanna play again?\n";
            cout << "Please enter yes/no. ";
        }
    } while (repeat == true);
    return 0;
}