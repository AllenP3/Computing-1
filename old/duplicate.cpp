#include <iostream>
#include <string>

using namespace std;

int print(int a[], int size){
   
   for(int j = 0; j < size; j++){
    cout << a[j];
   }
    return 0;
}
int duplify(int a[], int size){
    for(int i = 0; i < size; i++){
        if(a[i] == 0){
            cout << "( ";
        }
        else{
            cout << ") ";
        }
    }
    return 0;
}

int main(){

    string s = "Allel";
    int size = s.size();
    int a[size] = {};

    for(int j = 0; j <= size; j++){ 
    
    for(int i = 0; i < size; i++){
        if(i == j){
            continue;
        }
        else if(s[j] == s[i]){
            a[j]++;
        }
    }}

    print(a, size);
    cout <<endl;
    duplify(a, size);
    
}