/*
~~First Program~~
   cout << "Hello World"<<endl;;
   cout << "Hello World";

 return 0;
 
~~Continue Statement, Break, ||, &&, !~~

    char input;

    for( int i = 1; i <= 10; i++){
        if (i == 7 || i == 5)
            continue;
        cout << i << endl;
    }
    cout << "Continue used to skip out of 5 and 7 "<<endl;


~~Static Cast Conversion~~
    cout << "Enter Character: " ;
    cin >> input;
    cout << "The integer value of " << input << " is " << static_cast<int> (input) << endl;


~~ASCII~~
    cout << "Decimal" << "\t" <<"Octal"<< "\t" << "Hexadecimal"<<endl;
    
    for (int x=1; x <=256; x++){
        cout << x <<oct<< "\t"<< x <<hex << "\t" << x << dec <<endl;
    }
    return 0;

~~Creating a function~~
  
#include <iostream>
using namespace std;
double Maximum(double, double, double);
int main(){
    double number1, number2, number3;
    
    cout << "\n" << "Enter three floating-point numbers: ";
    cin >> number1 >> number2 >> number3;

    cout << "Maximum is: "<<Maximum(number1, number2, number3)<< endl;
}
double Maximum ( double x, double y, double z){
    double max = x;

    if (y > max)
        max = y;
    if (z > max)
        max = z;
    return max;
}    
  

 #include <iostream>

 using namespace std;

 string name(){
    string n;
    cout << "Enter name: ";
    cin >> n;

    return n;
 }

 int main(){

    string a {name()};
    cout << a;
 }


#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e, f, g, h, i, j, number;
    float counter;
    int sum, sump, sumnp, greatest, smallest;
    double averagep, averagenp;

    cout <<"Enter ten integer numbers followed by return. "<<endl;
    
    for (counter = 1; counter<=10; counter++){
        cin >> number;
        
        if (number < 0){
            sumnp + number}
            else (sump + number);
           

    };
    cout << "sump" <<sump<<endl;
    cout << "sumnp" <<sumnp<<endl;


    }} */
     /*
    }
    greatest = a;
    if ( b > greatest)
        greatest = b;
    if ( c > greatest)
        greatest = c;
    if ( d > greatest)
        greatest = d;
    if ( e > greatest)
        greatest = e;
    if ( f > greatest)
        greatest = f;
    if ( g > greatest)
        greatest = g;
    if ( h > greatest)
        greatest = h;
    if ( i > greatest)
        greatest = i;
    if ( j > greatest)
        greatest = j;

    smallest = a;
    if ( b < smallest)
        smallest = b;
    if ( c < smallest)
        smallest = c;
    if ( d < smallest)
        smallest = d;
    if ( e < smallest)
        smallest = e;
    if ( f < smallest)
        smallest = f;
    if ( g < smallest)
        smallest = g;
    if ( h < smallest)
        smallest = h;
    if ( i < smallest)
        smallest = i;
    if ( j < smallest)
        smallest = j;

    
    
    sum = a+b+c+d+e+f+g+h+i+j;


}  
~~23/11/2022~~
*
*
*
*
*


--Series of Numbers--

#include <iostream>

using namespace std;

int main(){
    int x, sum = 0, p_sum = 0, p_n = 0, n_sum = 0, N_n = 0, G_num, S_num;

    for (int c = 0; c,10;c++){
        cin >> x;

        sum += x;
        if (x > 0){
            p_sum += x;
            p_n ++;
        }
        if (x<0){
            n_sum += x;
            N_n ++;
        }

        if(c==0){
            G_num = x;
            S_num = x;
        }
            else if (G_num < x){G_num = x}
            else if (S_num > x){S_num = x}
    }
}



--Babylonian Algorithm (or Heron's Formula)--
#include <iostream>

using namespace std;

int main(){
    double n, guess, r, precision;

    cout<< "Enter a number greater than 0 (except 1) to compute the square root of: ";
    cin >> n;

    if (n == 0) {
        cout << "Error, can't calculate square root of a non positive number";
        return 0;
    }
    else if (n == 1) {
        cout << "Square root of 1 is 1!";
        return 0;
    }
    guess = n/2.0000;
    r = n/guess;

    do {
        precision = (guess - (guess + r) / 2.0000) / guess * 100;
        guess = (guess + r) / 2.0000;
        r = n / guess;
    }
    while( precision > 1);

        cout<<"Square root of " << n << " equals : " << guess;
    }



---Running Speed, Space--

#include <iostream>

using namespace std;

int main(){

    int kph, mpk; 

    cout << "Enter speed in kilometers per hour: ";
    cin >> kph;
    mpk = 60/kph;
    int mpk_int = static_cast<int>(mpk);
    cout <<kph<<" kilometers per hour equals "<< mpk_int << " minutes and " << (mpk - mpk_int)*60 <<" seconds.";
}
Problem 4 : Speed of Sound

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int s_temp, e_temp, d_temp, new_temp;
    double v = 0.00;
    cout << "Enter the starting temperature, in degrees Celsius: ";
    cin >> s_temp;
    cout << "Enter the ending temperature, in degrees Celsius: ";
    cin >> e_temp;

    d_temp = e_temp - s_temp;
    int d_temp_int = static_cast<int>(d_temp);

    for(int counter = 0; counter <= d_temp_int; counter++){
        new_temp = s_temp + counter;
        v = 331.3 + (0.61*new_temp);
        cout << "At " << s_temp + counter<<" degrees celsius the velocity of sound is ";
        cout<<fixed<<showpoint;
        cout << setprecision(2);
        cout<<v<<"m/s"<<endl;
    }
}
7/12/2022
Campus 2 Tutorial - Khader

~~~~Strings~~~~

Strings store text
eg. string greeting = "Hello";

-Always use #include <string>
-These can also be used as arrays
eg. int main(){
    string greeting = "Hello";
    cout << greeting[1]<<greeting[4];
    return 0;
}
  --this will output e and o

#include <iostream>
#include <string>

using namespace std;

int main(){
    string greeting = "Hello";

    cout << greeting[1]<<endl;

    greeting = greeting + " World";
    cout << greeting<<endl;

    string firstname = "Allen";
    string lastname = " Prasad";
    string fullname = firstname + lastname;
    
    alternative form :
    string fullname = firstname.append(lastname)
    append returns the value 
    
    cout << fullname;
    return 0;
}
Adding number and strings



#include <iostream>
#include <string>

using namespace std;

int main(){
   string x = "10";
int y = 20;
char z = x[0] + y; 

cout << z;
}

-String Length

#include <iostream>
#include <string>

using namespace std;

int main(){
    string txt = "ALLEN";
    cout << "the length of the string is "<<txt.length();
}

-Access Strings
  Characters in a string can be accessed by referring to its 
  index number inside square brackets.


#include <iostream>
#include <string>

using namespace std;

int main(){
    string txt = "ALLEN";
    cout << txt[0];
}

-Change String characters

#include <iostream>
#include <string>

using namespace std;

int main(){
string myString = "Hello";
myString[0] = 'J';
cout << myString;
// Outputs Jello instead of Hello
}

-Special Characters in Strings

string txt = "We are the so-called \"Vikings\" from the north.";

#include <iostream>
#include <string>

using namespace std;

int main(){
string txt1 = "Its\'s alright";
string txt2 = "The character \\ is called backslash.";
string txt3 = "We are the so-called \"Vikings\" from the north.";
}

-User Input Strings


#include <iostream>
#include <string>

using namespace std;

int main(){
string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;
/*
cout << "type your full name: ";
cin >> fullname;
cout << "Your name is: " << fullname;
//Problem
//Workarouund

}

#include <iostream>
#include <string>

using namespace std;

void printsize(string x){

    cout << "string \""<< x <<"\" is of size "<<x.size();
}

int main(void){
    printsize("Allen");

}

#include <iostream>

using namespace std;

int power(int x, int y){
    int results = x;
    for(int c = 0; c < (y-1); c++){
        results = results * x;
    }
       return results;
}
int main(){
    cout << power(3, 4);
    
}

Arrays in C++



#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    const int kArraySize = 12;
    int n[kArraySize];

    for (int i = 0; i < kArraySize; i++)
    n[i] = i;
    cout << "Element" << setw(13) << "Value" <<endl;

    for (int j = 0; j < kArraySize; j++)
    cout << setw(3) << "n[" << j << "] =" << setw(13) << n[j] << endl;
    return 0;
    
}
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n[] = {0,1,2,3,4,5};
    int array_size = sizeof(n) / sizeof(int);
    cout << sizeof(n)<<endl;
    cout << array_size;

    
}
#include <iostream>
#include <iomanip>

using namespace std;
int Sum(int x, int y);
int main(){
    int a[] = {1, 2, 3};
    int b[] = {1, 2, 3};
    cout << Sum(a[0], b[1]);
}
int Sum(int x, int y){
    return x + y;
}
#include <iostream>
#include <iomanip>

using namespace std;
int Sum(int a[], int y);
int main(){
    int Allen[] = {1, 2, 3};
    int arraysize = sizeof(Allen) / sizeof(int);
    cout << "Sum(a, "<<arraysize<<") = "<<Sum(Allen, arraysize);
}
int Sum(int a[], int y){
    int sum = 0;
    for(int i = 0; i < y; i++){
        sum += a[i];
    }
    return sum;
}


#include "ArrayIO.cpp"
#include <iostream>

using namespace std;

int main(){ 
    const int kMaxSize = 100; 
    int a[kMaxSize] = { 0 }, size; 

    Read(a, size, kMaxSize);
    cout << "The array has " << size << " elements: "; 

    Print(a, size); 
    cout << endl;
    return 0;} 

--Two dimensional Arrays--

#include <iostream>

using namespace std;

void printArray( const int[][3]);
const int rows = 2;
const int columns = 3;

int main(){
    int array1 [rows][columns] = {{1, 2, 3}, {4, 5, 6}};
    int array2 [rows][columns] = {1, 2, 3, 4, 5};
    int array3 [rows][columns] = {{1, 2}, {4}};
    
    cout << "Values in array1 by row are:"<<endl;
    printArray(array1);

    cout << "Values in array2 by row are:"<<endl;
    printArray(array2);

    cout << "Values in array3 by row are:"<<endl;
    printArray(array3);
}
void printArray(const int a[][columns]){

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << a[i][j] <<" ";
        }
              cout << endl;
    }
#include <iostream>

using namespace std;

int main(){
    int x(4);
    int y = 5;
    int* x_ptr(nullptr);
    int* y_ptr(nullptr);
    x_ptr = &x;
    y_ptr = &y;

    cout << "\nx = " << x;
    cout << " x_ptr = " << x_ptr << endl;
    cout << "\ny = " << y;
     cout << " y_ptr = " << y_ptr << endl;
     
return 0;

}

#include <iostream>

using namespace std;

int main(){
    int x(4), y(5), t(0);
    int* x_ptr;
    int* y_ptr;

    x_ptr = &x;
    y_ptr = &y;

   cout << x << "  " << y <<endl;
    t = *y_ptr;
    y = *x_ptr;
    x = t;
    cout << x << "  " << y <<endl;
}
#include <iostream>

using namespace std;

int main()
{
    int b[] = { 10, 20, 30, 40 }; 
    int* b_ptr = b; 

    cout << "Array b printed with:\n\nArray subscript notation\n";
    for (int i = 0; i < 4; i++)
        cout << "b[" << i << "] = " << b[i] << '\n';

    cout << "\nPointer/offset notation where the pointer is the array name\n";
    for (int offset1 = 0; offset1 < 4; offset1++)
        cout << "*(b + " << offset1 << ") = "<<*(b + offset1)<<'\n';

    cout << "\nPointer subscript notation\n";
    for (int j = 0; j < 4; j++)
        cout << "b_ptr[" << j << "] = " << b_ptr[j] << '\n';
    cout << "\nPointer/offset notation\n";

    for (int offset2 = 0; offset2 < 4; offset2++)
    cout << "*(b_ptr + "<<offset2<<") = "<<*(b_ptr + offset2)<<'\n';
    return 0;
}


~~NeuralNine Youtube session~~
~~~Pointers~~~
#include <iostream>


int main(){

    int a = 10;

    std::cout << &a << std::endl;
    int *myptr = &a;

    std::cout << *myptr << std::endl;

    *myptr = 20;

    std::cout << a <<std::endl;


    return 0;
} 

#include <iostream>

using namespace std;

int main(){

    int arr[100];

    cout << &arr <<endl;
    cout << &arr[0]<<endl;
    cout << &arr[1]<<endl;
    cout << &arr[2]<<endl;
    cout << &arr[3]<<endl;
    cout << &arr[4]<<endl; 
    
    int *ptr = arr;
    cout << ptr <<endl;
    return 0;


}

#include <iostream>

using namespace std;

int main(){

    int arr[10];

    int *first_post = arr;

    for(int i = 0; i < 10 ; i++){
        *(first_post + i) = i * 20;
    }
    for(int x: arr){
        cout << x << endl;
    }
    
    return 0;
}

#include <iostream>

using namespace std;

int main(){

    int a = 10;
    int *ptr = &a;

    ptr = nullptr;

    return 0;
}

#include <iostream>

using namespace std;

void function1(){
    std::cout << "I am function one!" <<std::endl;
}

void function2(){
    std::cout << "I am function two!" <<std::endl;
}

int main(){

    void (*myfunc)();

    myfunc = function1;

    myfunc();

    myfunc = function2;

    myfunc();
    return 0;
}

#include <iostream>

using namespace std;

int main(){
    
    int var = 8;
    int* ptr = &var;
    *ptr += 10;
    cout << var;

}
#include <iostream>

using namespace std;

int main(){
    char* buffer = new char[8];
    char** ptr = &buffer;
}
~~End of Youtube Session~~

#include <iostream>

using namespace std;

int main(){
    int b[] = {10, 20, 30, 40};
    int* b_ptr = b;

    cout << "Array b printed with: \n\n Array subscript notation\n";
    for(int i = 0; i < 4; i++){
        cout << "b["<<i<<"] = "<<b[i] << '\n';
    }
    cout << "\nPointer/offset notation where the pointer is the array name\n";
    
    for (int offset1 = 0; offset1 < 4; offset1++)
        cout << "*(b + " << offset1 << ") = "<<*(b + offset1)<<'\n';

    cout << "\nPointer subscript notation\n";
    
    for (int j = 0; j < 4; j++)
        cout << "b_ptr[" << j << "] = " << b_ptr[j] << '\n';
   
    cout << "\nPointer/offset notation\n";

   
    for (int offset2 = 0; offset2 < 4; offset2++)
        cout << "*(b_ptr + "<<offset2<<") = "<<*(b_ptr + offset2)<<'\n';
    
    return 0;   
}

#include <iostream>

using namespace std;

int main(){
    char c;
    int i;
    double d;
    int array[20];
    int* ptr = array;

    cout << "sizeof c = "<< sizeof(c)
    << "\tsizeof(char) = " << sizeof(char)
    << "\nsizeof i = " << sizeof(i)
    << "\tsizeof(int) = " << sizeof(int)
    << "\nsizeof d = " << sizeof(d)
    << "\tsizeof(double) = " << sizeof(double)
    << "\nsizeof array = " << sizeof(array)
    << "\nsizeof ptr = " << sizeof(ptr) << endl;
return 0;

}

#include <iostream>
#include <string>

using namespace std;

int main(){
    string fullname;

    cout << "Enter Full name:";
    getline(cin, fullname);
    cout << fullname;
    return 0;
}
// Find all errors in the following C++ program.
// Change the code so that it compiles.
// Do not change the functionality of the function.
// Compiling has been disabled.
// Do not forget to save your results.


#include <iostream>

// This function should return the smallest element of a float array. 
float find_smallest_array_element(float arr[], const int size) {

    for (int i = 0; i < size; i++)
    {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
    std::cout << "Smallest element = " << arr[0];

    return 0;
}

#include <iostream>

using namespace std;

int checkdigit(int postal){
    int sum = 0, m;
    static int i = 0;
    
    while(postal > 0){
        m = postal&10;
        sum = sum + m;
        postal = postal/10;
    }
    while(sum % 10 != 0){
        sum = sum + 1;
        i++;
    }
}

#include <iostream>
#include <string>

using namespace std;

int main(){

    int i = 2021;
    string s = to_string(i);

    cout << s[0];
}

#include <iostream>

using namespace std;

int main(){
    int a[3][3] = {{1,2},{3,4}};
    int size = sizeof(a)/sizeof(a[0][0]);

    cout <<size<<endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j]<<" ";
        }
        cout <<endl;
    }
}

#include <iostream>

using namespace std;

int main(){

    int a[] = {6,1,2,3,4};
    int* point = &a[0];
    int* pointend = &a[3];

    cout << point<<endl;
    cout << pointend<<endl;

    cout << pointend - point;
}
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int a[100] = {0};
    int num;
    int key;
     

    cout << "Enter integers. Terminate with EOF."<<endl;
    
    do {cout << "a[" << num << "]: ";}
    while (cin >> a[num++]);
    --num;
    cout << "The array has "<<num<<" elements: ";
    
    for(int i = 0; i<num; i++){
        cout <<fixed<<setprecision(2)<<a[i]<<" ";
    }
    
    
    cout << "Please enter search key: ";
    cin >> key;
}

#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;



int main(){
    char a[] = "table";
   
    for (int x=0; x<strlen(a); x++){
        putchar(toupper(a[x]));}

    return 0;
}

#include <iostream>

using namespace std;

int main(){

    cout << 5/3;
}
Update 17-01-2023
*/

