#include <iostream>

using namespace std;

int main(){
    int a = 300;
    int b;
    cout << "I have a number betwen 1 and 1000."<<endl;
    cout << "Please type your first guess."<<endl;
    cout << "? = ";
    while(cin >> b){
        if(b > a){
            cout << "Too high. Try Again."<<endl;
            cout <<"? = ";
        }
        else if(b < a){
            cout << "Too low, try again."<<endl;
            cout <<"? = ";
        }
        else{
            cout << "Correct!!";
            break;
        }
    }}