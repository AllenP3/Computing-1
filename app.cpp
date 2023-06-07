#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <iomanip>
#include <vector>
using namespace std;

void arr(vector<int> sth){
    //cout << size << endl;
    for(int i = 0; i < sth.size(); i++){
        cout << sth[i] << "\t";
    }
    cout << endl;
}

void play_game(){
    vector<int> guesses;
    //int guess_count = 0;

    int random = rand() % 251;
    cout << random << endl;
    cout << "Guess a number: ";
    while(true){
        int guess;
        cin >> guess;
        guesses.push_back(guess);

        if(guess == random){
            cout << "You win!\n";
            break;
        }
        else if(guess < random){
            cout << "Too low\n";
        }
        else{
            cout << "Too high\n";

        }
    }
    arr(guesses);
}



int main(){
    
    srand(time(NULL));
    int choice;

    do{
        cout << "0. Quit" << endl << "1. Play Game\n";
    cin >> choice;
        switch(choice){
            case 0:
                cout << "Quit";
                break;
            case 1:
                play_game();	
                break;
    }
    }
    while(choice != 0);
    

    //defined array with set values will be initialized with 0s
    //undefined arrays with predetermined size will be initialized with random values
    //guesses[0] = 10;
    //int num_elements = sizeof(guesses) / sizeof(guesses[0]);
    //cin >> guesses[0];
    //cout << guesses[0];
    //cout << sizeof(guesses) << endl;
    //int size = sizeof(guesses) / sizeof(guesses[0]);
    //arr(guesses, SIZE);   // without [], it is the name of the array

    const int SIZE = 10;
    int guesses[SIZE];
    int count = 0;

    for (int i = 0; i < SIZE; i++){
        if(cin >> guesses[i]){
            count++;
        }
        else{
            break;
        }
    }
    //arr(guesses, count);

    cin.clear();
    cin.ignore(10000, '\n');
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return 0;

}
//arrays are limited because the size is fixed on runtime. It is not dynamic, it cannot be changed once created
//vectors are dynamic arrays, they can be changed once created
// only use the [] when referring to an element of an array, or a position. When passing, use name only.
