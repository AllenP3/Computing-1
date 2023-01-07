#include <iostream>
#include <string>

using namespace std;

bool check(string n){

    bool answer;

    int size = n.size();
    int exes=0, ohs = 0;

    for(int i = 0; i <= size; i++){
        if(n[i] == 'x' || n[i] == 'X'){
            exes++;
        }
        else if(n[i] == 'o' || n[i] == 'O'){
            ohs++;
        }
    }


    if(exes == ohs){
       answer = true;
    }
    else if( exes != ohs){
        answer = false;
    }
    else if(exes == 0 && ohs == 0){
        answer = true;
    }
    
    return answer;

}

int main(){
    string str = "ooxx";
    string str2 = "ooox";
    string str3 = "wwwoo";
    string str4 = "qqww";

    cout << check(str)<<endl;
    cout << check(str2)<<endl;
    cout << check(str3)<<endl;
    cout << check(str4)<<endl;
}