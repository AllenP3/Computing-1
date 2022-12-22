#include <iostream>

using namespace std;

char convert(char c){
    if (c < 78 && c > 64)
    {
        return c + 13;
    }
    else if (c < 91 && c > 77)
    {
        return c-13;
    }
    else if ( c < 110 && c > 96)
    {
        return c + 13;
    }
    else if (c < 123 && c > 109)
    {
        return c-13;
    }

    return c;
}

void rot13(const char* original, char* encoded){

    int i = 0;
    for(i = 0; original[i]!= '\0'; i++){
        encoded[i] = convert(original[i]);
    }

    encoded[i] = original[i];
}