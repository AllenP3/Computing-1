#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    if(argc != 2){
        cout << "Usage: hello <your name>"<<endl;
    }

    cout << "Hello "<< argv[1] << " !" <<endl;
}