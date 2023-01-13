#include <iostream>
#include <iomanip>

using namespace std;

const int* LinearSearch(int array[], int key, int size){
    int* point = &array[0];
    int* fnd = nullptr;

    for(int i = 0; i < size; i++){
        if(array[i] == key){
            fnd = &array[i];
            break;
        }
    }
            if(fnd != nullptr){
                return fnd;
            }
            else{
                return nullptr;
            }
            
}

int main(){

    int a[100] = {0};
    int *initpoint = a;
    int num = 0;
    int key = 0;

    
    

    cout << "Enter integers. Terminate with EOF."<<endl;
    do {cout << "a[" << num << "]: ";}
    while (cin >> a[num++]);
    --num;
    cout << "The array has "<<num<<" elements: ";
     for(int i = 0; i<num; i++){
        cout <<a[i]<<" ";
    }
    
    cout<<endl;
    cin.clear();
    cout << "Please enter search key: ";
    cin >> key;
    
    
    const int *answerpoint = LinearSearch(a, key, num);
    if(answerpoint != nullptr){
        cout << "Search key found at address "<<answerpoint<<endl;
        cout << "This address correspnds to the array position "<<answerpoint - initpoint;
    }
    return 0;
   
    
}