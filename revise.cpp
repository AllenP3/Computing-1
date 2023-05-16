//Print ASCII table for the exam
#include <iostream>

using namespace std;

int main(){

    int a;
    char b = 'h';
    bool is_true = false;



    cout << boolalpha << is_true <<endl;
}

// Overflow : using/storing more bits than originally designed for = overflow
// Using unsigned ensures that the number is always positive
// int is usually 32 bits, but always 16 bits
// using unsigned on a char increases positive limit but no negatives are allowed
// Casting to another data type = (type) value [eg. (int) 3.14 = 3]
// Casting to a smaller data type = truncation
// \0 can be used to indicate the end of a string
// "Hello" = " \"Hello\" "
// \ = "\\"

// with bool, 0 is false, anything else is true (even -1)
// instead of declaring namespace for all files, use for what you write the most : 'using std::cout' (instead of using namespace std;)
// [bool is_true = false;] cout << is_true  ==> Output = 0
// [bool is_true = true;] cout << std::boolalpha << is_true  ==> Output = false

//floating point numbers : float, double, long double
//77000 = 7.7E4