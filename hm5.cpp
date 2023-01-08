/*Problem 1
#include <iostream>

using namespace std;

!!Get this fixed!!
int print1d(int a[], int size){
   
   for(int j = 0; j < size; j++){
    cout << a[j] <<" ";
   }
    return 0;
}
int print2d(int* a[], int size){
   for(int i = 0; i < size; i++){
   
   for(int j = 0; j < 2; j++){
    cout << a[i][j] <<"\t";
   }}
    return 0;
}

int main(){
    int a[10][2] = {{1, 0},{2, 0},{3, 0},{4, 0},{5, 0},{6, 0},{7, 0},{8, 0},{9, 0},{10, 0}};
    int size = 40;
    int rr[size];
    int response;

    cout << "Please enter value: ";

    for (int i = 0; i <= size-1; i++){

        cin >> response;
        rr[i] = response;
    }

    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(a[i][0] == rr[j]){
                a[i][1]++;
            }
        }
    }
   cout << "Rating" << "\t" << "Frequency"<<endl;
   for(int i = 0; i < 10; i++){
   
   for(int j = 0; j < 2; j++){
    cout <<"   "<<a[i][j] <<"\t";
   }
   cout <<endl;}
    return 0;

}Problem 2

#include <iostream>

using namespace std;

int main(){

    int a[100] = {0};
    int num = 0;
    int sum = 0;
    double average = 0;

    cout << "Enter integers. Terminate with EOF."<<endl;
    
    do {cout << "a[" << num << "]: ";}
    while (cin >> a[num++]);
    --num;
    cout << "The array has "<<num<<" elements: ";
    
    for(int i = 0; i<num; i++){
        cout << a[i]<<" ";
    }
      cout<<endl;
    
    for(int i = 0; i<num; i++){
        sum = sum + a[i];
    }
    cout << "The sum of the array elements is: "<<sum<<endl;
    average = sum/num;
    cout << "The average of the array elements is: "<<average<<endl;
}
 Problem 3   
#include <iostream>

using namespace std;

void GetExtremes(double& max_ref, double& min_ref, const double a[], int size){
    max_ref = a[0];
    min_ref = a[0];
    
    for(int i = 0; i < size; i++){
      if(max_ref < a[i])
         max_ref= a[i];
   }
    for(int i = 0; i < size; i++) {
      if(min_ref > a[i])
         min_ref= a[i];
   }
    }
int main(){

    double a[100] = {0};
    int num = 0;
   double max, min;

    cout << "Enter integers. Terminate with EOF."<<endl;
    
    do {cout << "a[" << num << "]: ";}
    while (cin >> a[num++]);
    --num;
    cout << "The array has "<<num<<" elements: ";
    for(int i = 0; i<num; i++){
        cout << a[i]<<" ";
    }
      cout<<endl;
    GetExtremes(max, min, a, num);
    cout << "Minimum: "<<min<<" Maximum : "<<max;
}

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double InnerProduct(const double a[], const double b[], int size){
    static double answer = 0;
    for(int i = 0; i < size; i++){
        answer += a[i]*b[i];
    }
    return answer;
}

int main(){
    double a[3] = {};
    double b[3] = {};
    int size = 2;
    
    cout << "The first vector is: ";
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }
    cout << "The second vector is: ";
    for(int i = 0; i < size; i++){
        cin >> b[i];
    }

    cout << "Their inner product is: "<<fixed<<setprecision(2)<<InnerProduct(a, b, size);
}*/
#include <iostream>
#define N 3
using namespace std;


void rotateMatrixanti(int mat[][N]){
 for(int i = 0; i < N/2; i++){

        for(int j = i; j < N-i-1; j++){

            int temp = mat[i][j];
            mat[i][j] = mat[j][N-1-i];
            mat[j][N-1-i] = mat[N-1-i][N-1-j];
            mat[N-1-i][N-1-j] = mat[N-1-j][i];
            mat[N-1-j][i] = temp;
        }
    }
}

void rotateMatrixclock(int mat[][N]){
 for(int i = 0; i < N/2; i++){

        for(int j = i; j < N-i-1; j++){

            int temp = mat[i][j];
            mat[i][j] = mat[N-1-j][i];
            mat[N-1-j][i] = mat[N-1-i][N-1-j];
            mat[N-1-i][N-1-j] = mat[j][N-1-i];
            mat[j][N-1-i] = temp;
        }
    }
}

void Printmatrix(int a[][N]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j]<<" ";
        }
        cout <<endl;
    }
}

int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    Printmatrix(a);
    cout<<endl;
    rotateMatrixclock(a);
    Printmatrix(a);

    

   
}
