#include <iostream>

using namespace std;

int sum(int num1, int num2){
    return num1 +num2;
}

int diff(int num1, int num2){
    return num1 - num2;
}

int mul(int num1, int num2){
    return num1 * num2;
}

double Div(int num1, int num2){
    return num1 / num2;
}

int mod(int num1, int num2){
    return num1 % num2;
}


int main(){

    int num1, num2;
    char op;
    cout << "Please enter number 1: ";
    cin >> num1;
    cout << "Please enter number 2: ";
    cin >> num2;
    cout << "Please enter the operator symbol: ";
    cin >> op;

    switch (op){
        case '+':
        cout << num1 << " + " << num2 <<" = "<<sum(num1, num2);
        break;

         case '*':
        cout << num1 << " * " << num2 <<" = "<<mul(num1, num2);
        break;

         case '-':
        cout << num1 << " - " << num2 <<" = "<<diff(num1, num2);
        break;

         case '/':
        cout << num1 << " / " << num2 <<" = "<<Div(num1, num2);
        break;

         case '%':
        cout << num1 << " % " << num2 <<" = "<<mod(num1, num2);
        break;

        default:
        cout << "Unknown math operator. Leaving the program..." <<endl;
        break;

    }

    
}