#include <iostream>

using namespace std;

int factorial(int);

int main(){
    int num;

    cout << "Please input a positive integer number: ";
    cin >> num;

    cout << "Factorial of " << num << " = " << factorial(num);

}

int factorial(int n) {
    if (n > 1)
        return n * factorial(n - 1);
    else 
        return 1;

}