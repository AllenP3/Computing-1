#include <iostream>

using namespace std;

int print(string a, int size){
   
   for(int j = 0; j < size; j++){
    cout << a[j];
   }
    return 0;
}
int main(){
    int a[9][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int rr[40];
    int response;

    cout << "Rating" << "\t" << "Frequency";
    
    for (int i = 0; i <= 40; i++){
        cout << "Please enter value: ";
        cin >> response;
        rr[i] = response;
    }
    
}