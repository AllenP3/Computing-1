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

}*/
