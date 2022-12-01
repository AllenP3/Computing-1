#include <iostream>

using namespace std;

int main(){
    int u_limit;
    bool isprime;

    cout << "Enter upper limit for prime number search: ";
    cin >> u_limit;
    
    


        for(int a = 3; a <= u_limit; a++){

            for (int b = 2; b <= (u_limit-1); b++){
                if(a%b == 0){
                    isprime == false;
                    break;
                }
                else isprime == true;
            }
        if (isprime == true){
            cout << a << "is a prime number." <<endl;
            }
            else {
                cout << "Not here" <<endl;}
    
}}