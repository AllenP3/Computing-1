#include <iostream>
#include <iomanip>

using namespace std;

const int* LinearSearch(int array[], int key, int size){
    int* point = &array[0];
    int* fnd = nullptr;

    for(int i = 0; i < size; i++){
        if(array[i] = key){
            fnd = &array[i];
            break;
        }
    }
            if(fnd != nullptr){
                cout << "Search key found at address "<<fnd;
                cout << "This address corresponds to the array index position "<<fnd - point;
            }
            else{
                cout << "Search key not found";
            }
            
    return 0;
}

int main(){

    int a[100] = {0};
    int num;
    int key;
     
    cout << "Enter integers. Terminate with EOF."<<endl;
    
    do {cout << "a[" << num << "]: ";}
    while (cin >> a[num++]);
    --num;
    cout << "The array has "<<num<<" elements: ";
     for(int i = 0; i<num; i++){
        cout <<a[i]<<" ";
    }
      cout<<endl;
    cout << "Please enter search key: ";
    cin >> key;
    return 0;
   
    
}