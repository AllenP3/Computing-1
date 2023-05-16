#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

void Capitalize(char* input_ptr){

    for(int i = 0; i < strlen(input_ptr); i++){
        input_ptr[i] = toupper(input_ptr[i]);
    }
}

int main(){
    
    int maxsize = 79;
    char origword[maxsize + 1];

    
    do{
    cout << "Please enter a line of text: ";
    cin.getline(origword, maxsize);
    cin.clear();
    if(*origword){
        cout <<"You entered: "<<"\"" << origword << "\""<<endl;
        Capitalize(origword);
        cout << "Your input capitalized: " << "\"" <<origword<< "\""<<endl;

    }
    }
    while(*origword);
    return 0;
}