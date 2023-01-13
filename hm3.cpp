/*Problem 1

#include <iostream>

using namespace std;

int main(){
    char sym;
    int a, b;
    double result;

    cout << "Please input two integers followed by a math operator (+,-,*,/,%): ";
    cin >> a >> b >> sym;

    switch(sym){
        case '+':
            result = a + b;
            cout << a << " "<<sym<< " "<< b << " = "<<result<<endl;
            break;
        case '-':
            result = a - b;
            cout << a << " "<<sym<< " "<< b << " = "<<result<<endl;
            break;
        case '*':
            result = a * b;
            cout << a << " "<<sym<< " "<< b << " = "<<result<<endl;
            break;
        case '/':
            result = a / b;
            cout << a << " "<<sym<< " "<< b << " = "<<result<<endl;
            break;
        case '%':
            result = a % b;
            cout << a << " "<<sym<< " "<< b << " = "<<result<<endl;
            break;
        default:
            cout << "Invalid operator"<<endl;
            break;


}}

Problem 2
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

Problem 3

#include <iostream>

using namespace std;

int square(int);

int main(){
    int a;
    cout << "Please input a non-negative integer number: "<<endl;
    cin >> a;

    cout << square(a);

}
int square(int a){
    if(a > 0)
    return a * (square(a - 1));

    else
        return 1;
}*/