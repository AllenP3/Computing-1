#include "ArrayIO.h"
#include <iostream>

using namespace std;

void Read(int a[], int& n_ref, int max_size){

    cout << "\nEnter integers. Terminate with EOF.\n";
    n_ref = 0;
    do { cout << "a[" << n_ref << "]: ";}
    while (cin >> a[n_ref++] && n_ref <= max_size);
    --n_ref;
    return;
    } 

void Print(const int a[], int size){
    for (int i = 0; i < size; i++) {
    cout << a[i] << " ";}}