// int items[] = {12, 13};
// vecotr <int>> items = {12, 13};
// items.push-back(100);
//items[2] answer is 100
//items.size() answer is 3
//INDEX starts at 0
//items.size() - 1 is the last index (dynamic)
//template classes use generic data types to work with different data types
//when calling a vector in a function, the vector gets copied -- use pass by reference or pointer
//Creating a vector

#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &data){  //passing by reference passes the memory address of vector being passed by reference
    //data.push_back(12);
    for(int i = 0; i < data.size(); i++){
        cout << data[i] << "\t";
    }
    cout << endl;
}
int main(){
/*
    vector <int> data = {1, 2, 3};
    data.push_back(12);
    cout << data[data.size() - 1] << endl;
    //cout << data[3] << endl;
    data.pop_back(); // removes last element
    cout << data.size() << endl;
*/
vector<int> data = {1, 2, 3};
print(data);
}