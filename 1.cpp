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



--Running Speed, Space--

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
*/
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