// template <typename T>
// void swap(T &a, T &b){ //this is a template function
//{ 
// T temp = x;
//}

#include <iostream>
#include <string>

using namespace std;

template <typename T>

void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
/*
void swap(string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
}
*/
int main(){
    int a = 10;
    int b = 20;

    swap(a, b);
    cout << a << " " << b << endl;

    string first_name = "John";
    string last_name = "Doe";
    swap(first_name, last_name);
    cout << first_name << " " << last_name << endl;
    return 0;
}