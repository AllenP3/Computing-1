#include <string>
#include <iostream>

using namespace std;

string solution(int number){

    string str_romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string results = "";

    for (int i = 0; i < 13; ++i){

        while(number-values[i] >= 0){
            results += str_romans[i];
            number -= values[i];
        }
    }
    return results;
}

int main(){

    int n;

    cout << "Please enter integer to be converted: ";
    cin >> n;
    cout << solution(n);
}