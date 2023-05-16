#include <iostream>
#include <cmath>

using namespace std;

bool is_pythagorean_triple(int a,int b,int c){
    double square_sum = (a*a)+(b*b);
    if (square_sum == (c*c))
        return true;
    else 
        return false;
}
int find_pythagorean_triple(int a,int c){
    int square_answ = (c*c)-(a*a);
    double b = sqrt(square_answ);
    double square_sum = (a*a)+(b*b);

    if(square_sum == (c*c))
        return b;
    else
        return -1;
        
}