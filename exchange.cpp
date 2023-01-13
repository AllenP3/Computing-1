#include <iostream>

using namespace std;

void exchange(int* array1_ptr, int length1, int* array2_ptr, int length2){
    int temp;
    if(length1 != length2){
        cout << "Not equal";
    }
    else{
    for(int i = 0; i < length1; i++){
        temp = array1_ptr[i];
        array1_ptr[i] = array2_ptr[i]; 
        array2_ptr[i] = temp;
    }
}}
int main(){
    int size = 5;
    int a[] = {0,1,2,3,4};
    int b[] = {9,8,7,6,5};

    exchange(a, size, b, size );
    
    cout << "Array A: ";
    for(int i = 0; i < size; i++){
        cout << a[i] <<" ";
    }
    cout << endl;
    cout << "Array B: ";
    for(int c = 0; c < size; c++){
        cout << b[c] <<" ";
    }
    cout << endl;
    
}