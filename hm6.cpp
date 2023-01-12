/*Problem 1
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
    int num;
    int key;


    cout << "Please enter search key: ";
    cin >> key;

    cout << "Enter integers. Terminate with EOF."<<endl;
    do {cout << "a[" << num << "]: ";}
    while (cin >> a[num++]);
    --num;
    cout << "The array has "<<num<<" elements: ";
     for(int i = 0; i<num; i++){
        cout <<a[i]<<" ";
    }
    cout<<endl;

    const int *answerpoint = LinearSearch(a, key, num);
    if(answerpoint != nullptr){
        cout << "Search key found at address "<<answerpoint<<endl;
        cout << "This address correspnds to the array position "<<answerpoint - initpoint;
    }
    return 0;
   
    
}
#include <iostream>
#include <iomanip>

using namespace std;

const int* GetMax(int* array[], int size){
    int *max = array[0];
    for(int i = 0; i < size-1; i++){
        if(array[i] <= array[i+1]){
            max = array[i+1];
        }
        }
        cout << max <<endl;
        return max;
    }

int main(){

    int a[] = {0};
    int num;
    int *point = &a[0];

    cout << "Enter integers. Terminate with EOF."<<endl;
    do {cout << "a[" << num << "]: ";}
    while (cin >> a[num++]);
    --num;
    cout << "The array has "<<num<<" elements: ";
     for(int i = 0; i<num; i++){
        cout <<a[i]<<" ";
    }
    cout << endl;
    
    cout << "Maximum : ";
    cout<<endl;
    return 0;
}

Problem3

#include <iostream>
#include <string.h>

using namespace std;

void Reverseinputstring(char input_array[], int length){
    for(int i = 0; i < length/2; i++){
        char temp = input_array[i];
        input_array[i] = input_array[length - i - 1];
        input_array[length-i-1] = temp;
    }
}

int main(){
    
    int maxsize = 7;
    char origword[maxsize + 1];
    int string_length;
    
    do{
    cout << "Please enter a word: ";
    cin.getline(origword, maxsize);
    cin.clear();
    if(*origword){
        cout <<"You entered: "<<"\"" << origword << "\""<<endl;
        string_length = strlen(origword);
        Reverseinputstring(origword, string_length);
        cout << "Your input reversed: " << "\"" << origword << "\""<<endl;

    }
    }
    while(*origword);
    return 0;
}*/

#include <iostream>
#include <string.h>
#include <cmath>


using namespace std;

void Capitalize(char* input_ptr){
    for(int i = 0; i < 79; i++){
        
    }
}

int main(){
    
    int maxsize = 79;
    char origword[maxsize + 1];
    int string_length;
    
    do{
    cout << "Please enter a word: ";
    cin.getline(origword, maxsize);
    cin.clear();
    if(*origword){
        cout <<"You entered: "<<"\"" << origword << "\""<<endl;
        Capitalize(origword);
        cout << "Your input capitalized: " << origword;

    }
    }
    while(*origword);
    return 0;
}