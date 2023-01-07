#include <iostream>


using namespace std;


int main(){

    int a[] = {2, 4, 6, 8, 9, 12, 14, 10};
    int size = sizeof(a) / sizeof(a[0]);
    int result;
    

    for (int i = 0; i <= size-2; ++i){
        
        if(a[i] % 2 != a[i+1] % 2){
            
            if(a[i+1] % 2 != a[i+2]){
                int temp = 0;
                a[i+2] = temp;
                a[i+2] = a[i+1];
                a[i+1] = temp;
            }
            else{
                int temp = 0;
                a[i+2] = temp;
                a[i+2] = a[i];
                a[i] = temp;
            }
        }
    }
    cout << a[size];
    
}