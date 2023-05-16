#include <iostream>
#include "BubbleSort.h"

using namespace std;

int main(){
    const int max_size = 100;
    int a[max_size], size;
    Read(a, size, max_size);
    
    cout << "After performing the bubble sort, we get: ";
    Print(a, size);
    cout << endl;
    return 0;
}