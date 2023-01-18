/*

#include <iostream>

using namespace std;

int sum(int x, int y){
    return x + y;
}
char sum(int a, int b, int c){
    a = a + '0';
    b = b + '0';
    c = c + '0';
    return a + b + c;
}

int sum(char x, char y, char z){
   x = x - '0';
   y = y - '0';
   z = z - '0';
   return sum(z, sum(x, y)); 
}


int main(){

    int n1 = 30, n2 = 20, n3 = 15;
    char c1 = '5', c2 = '7', c3 = '3';

    cout << "Int sum = "<< sum(n1, n2)<<endl;
    cout << "Char sum = "<<sum(c1, c2, c3)<<endl;
    cout << "Char sum2 = "<<sum(n1, n2, n3)<<endl;

    return 0;
}*/

#include <iostream>

using namespace std;


void mirror(int a[], int size){
    for(int i = 0; i < size-1; i++){
        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }
}

void fun2(int a[][2], int size){
    mirror(a[0], size);
    mirror(a[1], size);
}

void print(int a[][2], int size){

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main(){

    int a[][2] = {{3, 2}, {5, 7}};
    int size = 2;

    print(a, size);
    fun2(a, size);
    print(a, size);

    return 0;
}