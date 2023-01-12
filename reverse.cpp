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
}