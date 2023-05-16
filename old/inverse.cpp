#include <iostream>

using namespace std;

void inverse(int a[], int size){

    for(int i = 0; i < size; i++){
        a[i] = -1 * a[i];
    }

}
void print(int a[], int size){
    for(int i = 0; i < size; i++){
        cout << a[i] <<" ";
    }

}
int main(){
    int a[] = {1,2,3,-4,5};
    int size = sizeof(a)/sizeof(a[0]);

    inverse(a, size);
    print(a, size);
}