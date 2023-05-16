/*practiced online*/
#include <iostream>

using namespace std;

int sum(int n){

    int sum = 0;
    int m;

    while (n > 0){
        m = n%10;
        sum = sum + m;
        n = n/10;
    }
    return sum;
}

int main(){

    cout << sum(17);
}