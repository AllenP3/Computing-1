/*Problem 1

#include <iostream>

using namespace std;

int sum(int num1, int num2){
    return num1 +num2;
}

int diff(int num1, int num2){
    return num1 - num2;
}

int mul(int num1, int num2){
    return num1 * num2;
}

double Div(int num1, int num2){
    return num1 / num2;
}

int mod(int num1, int num2){
    return num1 % num2;
}


int main(){

    int num1, num2;
    char op;
    cout << "Please enter number 1: ";
    cin >> num1;
    cout << "Please enter number 2: ";
    cin >> num2;
    cout << "Please enter the operator symbol: ";
    cin >> op;

    switch (op){
        case '+':
        cout << num1 << " + " << num2 <<" = "<<sum(num1, num2);
        break;

         case '*':
        cout << num1 << " * " << num2 <<" = "<<mul(num1, num2);
        break;

         case '-':
        cout << num1 << " - " << num2 <<" = "<<diff(num1, num2);
        break;

         case '/':
        cout << num1 << " / " << num2 <<" = "<<Div(num1, num2);
        break;

         case '%':
        cout << num1 << " % " << num2 <<" = "<<mod(num1, num2);
        break;

        default:
        cout << "Unknown math operator. Leaving the program..." <<endl;
        break;

    }

    
}

Problem 2

#include <iostream>

using namespace std;

long fac(int n){
    if(n < 0)
        return 0;

    int f = 1;
    while (n > 1){
        f = f * n--;
    }
    return f;
}

long Perm(int n, int k){
    return fac(n) / fac((n-k));

}
int main(){
    int n, k;
    cout << "Enter number of elements in set: ";
    cin >> n;
    cout << "Enter number of elements to be taken out of the set: ";
    cin >> k;
    cout << "The number of permutations of " <<n<<" out of "<<k<<" is "<<Perm(n, k);

    
}
Problem 3

#include <iostream>

using namespace std;

long fac(int n){
    if(n < 0)
        return 0;

    int f = 1;
    while (n > 1){
        f = f * n--;
    }
    return f;
}

long Comb(int n, int k){
    return fac(n) / (fac(k)* fac((n-k)));

}
int main(){
    int n, k;
    cout << "Enter number of elements in set: ";
    cin >> n;
    cout << "Enter number of elements to be taken out of the set: ";
    cin >> k;
    cout << "The number of combinations of " <<n<<" out of "<<k<<" is "<<Comb(n, k);
}

Problem 4

#include <iostream>

using namespace std;

double Power(double x, int p){
    int res = x;

    for(int i = 1; i <= p-1; ++i){
           res = res * x; 
    }

    return res;
}

int main(){
    float num1;
    int num2;

    cout << "Enter a floating point number and an integer: ";
    cin >> num1 >> num2;
    cout << "Power("<<num1<<", "<<num2<<") = "<<Power(num1, num2);
}
Problem 5

#include <iostream>
#include <cmath>

using namespace std;

void ComputeSphere(double& V, double& S, double r=1.0){
    S = 4 * 3.141592 * r*r;
    V = (S*r) / 3;
}

int main(){

    double v, s, r;

    cout << "Enter the radius of a sphere: ";
    cin >> r;
    ComputeSphere(v, s, r);
    cout << "The sphere's surface is: " << s << endl;
    cout << "The sphere's volume is: "<<v <<endl;
}*/

#include <iostream>

using namespace std;

int main(){
    
}