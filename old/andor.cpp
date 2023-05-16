#include <iostream>

using namespace std;

int main(void) {
    char input;

    for( int i = 1; i <= 10; i++){
        if (i == 7 || i == 5)
            continue;
        cout << i << endl;
        

    }
    cout << "Continue used to skip out of 5 and 7 "<<endl;

    cout << "Enter Character: " ;
    cin >> input;
    cout << "The integer value of " << input << " is " << static_cast<int> (input) << endl;
}