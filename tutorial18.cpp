#include <iostream>

using namespace std;

int sum(int x, int y){
    return x + y;
}

double sum(char x, char y, char z){
   x = x - '0';
   y = y - '0';
   z = z - '0';
   return x + y + z; 

    
}

int main(){

    int n1 = 5;
    int n2 = 6;
    int intsum = sum(n1, n2);

    char c1 = '5';
    char c2 = '7';
    char c3 = '3';

    cout << "Int sum = "<< intsum<<endl;
    cout << "Char sum = "<<sum(c1, c2, c3)<<endl;

    return 0;
}