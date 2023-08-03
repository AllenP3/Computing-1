//Print ASCII table for the exam
/*
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){

    int a;
    char b = 'h';
    bool is_true = false;
    string greeting = "hello";  //greeting[0] = 'h'	
    greeting.append(" there");  //greeting = "hello there"
    greeting.insert(3, "   ");  //greeting = "hel   lo there"
    greeting.erase(3, 3);       //greeting = "hello there"

    //cout << sqrt(25) <<endl;
    //cout << pow(2, 3) <<endl;

    //cout << boolalpha << is_true <<endl;
    //cout << greeting <<endl;    //outputs hello
    //cout << greeting + " there" <<endl; //outputs hello there
    getline(cin, greeting); //gets the whole line
    cout << greeting <<endl;
}
*/
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
// Precision : float < double < long double
// fractions are better with float than with int
//float is untrustworthy, double is better

//cont int... creates a read only variable  (changing x = 10 will not compile)
// constants can also be defined using #define X 10, as well as enum {x = 10}
// const int x = 10; is better than #define X 10 because it is type safe (restricintg the scope of something is always good)

//NAN = not a number
//INF = infinity
//remainder(10, 3.25) = 0.25        also fmod(10, 3.25) = 0.25
//10 % 3.25 = error (cannot use modulo on floating point numbers)
//fmax(10, 9 ,8, 7, 6, 5, 4, 3) = 10
//fmin(10, 9 ,8, 7, 6, 5, 4, 3) = 3
//ceil(3.25) = 4
//floor(3.25) = 3   see also trunc(3.25) = 3
//trunc only crops off the decimal part, it does not round up or down
//floor always rounds down

//There are two types of strings, backward compatible C-strings and C++ string class
//C++ strings are better because they are more flexible and are more superior
//default value for string is "" (empty string)
// + = concatenation
// nameofstring.length() = length of string (including spaces)
//length is a member function of the string class
// functions are just by themselves, while methods are attached to objects
// when not using getline, the remaining will be held in buffer to be used by the next cin
//cin.getline() is used to get a whole line of numbers
//getline(cin, name) is used to get a whole line of strings
//greeting.length() and greeting.size() are the same thing
//greeting.append(" there") is the same as greeting += " there"
//greeting.insert(3, "   ") inserts 3 spaces at index 3
//greeting.erase(3, 3) erases 3 characters starting at index 3
//greeting.pop_back() erases the last character
//greeting.replace(0, 3, "   ") replaces 3 characters starting at index 0 with 3 spaces
//greeting.find("lo") finds the first occurence of "lo" in the string and returns the starting index
//string greeting = "What the hell?", greeting.replace(greeting.find("hell"), 4, "****") replaces "hell" with "****"
//greeting.substr(5, 3) returns a substring starting at index 5 with a length of 3
//greeting.find_first_of("aeiou") returns the index of the first vowel
//npos == a very large number, used to indicate that something is not found
//unsigned cant be negative, so it is used to indicate that something is not found
// if(greeting.find_first_of("!") == -1), cout << "NOT FOUND" <<endl;
//== is used to compare strings

//string greeting = "What?"
//greeting.compare("What?") == 0 means that the strings are equal, else they are not equal

//int x = 10 /4;  //x = 2
//double x = 10 / 4; //x = 2
//double x = 10.0 / 4; //x = 2.5 (use a dot to indicate that it is a double)

// if(!(name_guess == name_answer)) is the same as if(name_guess != name_answer)
// && || < > == !=


#include <string>
#include <iostream>

using namespace std;

void seasons();
void dowhile();
int main(){
    int age;
dowhile();
   // cout << "Enter your age: ";
    //cin >> age;
    /*switch(age){
        case 13:
            cout << "You are 13";   
            break;
        case 18:
            cout << "You are 18";
            break;
        default:
            cout << "You are not 13 or 18";
            break;
    }*/
    return 0;
}

void seasons(){
    enum seasons {spring, summer, fall, winter};
    seasons now = winter;
    switch (now){
        case summer:
            break;
        case winter:
            cout << "Stay warm";
            break;
        case spring:    
            break;

    }

}
//if break isnt used, it will continue to the next case (fall through) which means it hits all cases after the first one that is true
// when using a standalone while, no semicolon is required after the while statement, use while(something) {something}
// when it comes to do while, the semicolon is required after the while statement, use do {something} while(something);
void dowhile(){
    // use a do while loop when you want to run the loop at least once
    string password = "Hello";
    string guess;
    do {
        cout << "Guess the password: ";
        cin >> guess;
    }
    while(guess != password);
    // declare do while variables outside of the loop (variable scoping)
}
// break is used to break out of a loop (current loop)
// continue is used to skip the current iteration of a loop

// int point = guess ==answer ? 10:0; is the same as if(guess == answer){point = 10;} else {point = 0;}
// guess == answer ? cout << "Correct" : cout << "Wrong"; is the same as if(guess == answer){cout << "Correct";} else {cout << "Wrong";}
//