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
}