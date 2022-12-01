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