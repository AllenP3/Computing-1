#include <iostream>
#include <vector>
#include <array>
using namespace std;

void test(int value[]){ //doesnt qwork as array decays to pointer
    //for(int n : value){ //name a variable, type, and what you want to loop through
     //   cout << n << "\t";
    //}
}

int main(){
    int data[] = {1, 2, 3, 4, 5, 6};

    //Range based for loop only used for going through collections
    // also referred to as for each loop

    for(int n : data){ //name a variable, type, and what you want to loop through
        cout << n << "\t";
    }
    /* Regular for loop
    for (int i = 0; i  < 6; i++){
        cout << data[i] << "\t";
    }
    cout << "\n";
    */
   cout << "\n";
}