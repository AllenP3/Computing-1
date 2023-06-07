// stl arrays are like vectors but with fixed size
// array <int, 5> (type and size)
// arrays are static, vectors are dynamic, stl arrays are static
//arrays are passed by pointer, vectors are passed by reference
//stl arrays remember their size, vectors remeber their size, arryas do not remember their size
//stl arrays are like normal arrays, with an extra layer of capability
//array <int, 5> ages;
//ages.size() returns 5 and is possib
#include <iostream>
#include <array>

using namespace std;


void arr(array<int, 5> sth){
    //cout << size << endl;
    for(int i = 0; i < sth.size(); i++){
        cout << sth[i] << "\t";
    }
    cout << endl;
}

int main(){
   array<int, 5> data = {1, 2, 3};
   arr(data);
    
    }