//when passing by value, variable changed within funciton call only changes the copied instance of that variable
//the original variable int x = 5 remains 5 even after the funciton call (within which x is changed to maybe 13)
//exception to this is an array, which is modifiable within a function call as it is called by reference
//an array decays to a pointer when passed to a function, which is just an address to the first element


//when passing by reference, variable changed within function call changes the original variable
//  void doSomething(int &x){
//  x = 13;
//  } 
//x is an alias for the variable being passed by reference

#include <iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 10;
    int b = 20;
    swap(a, b);

}