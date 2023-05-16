#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int add(int first, int second){
    return first + second;
}

int main(int argc, char* argv[]){
    if(argc != 4){
        cout << "Invalid number of input parameters. Returning..."<<endl;
        return (1);
    }
    if(strcmp(argv[2], "+") != 0){
        cout << "Unexpected operator (not +). Returning..."<<endl;
        return(-1);
    }

   cout << argv[1];

}