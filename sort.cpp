#include <iostream>

using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp; 
    
}
void selectionSort(int arr[], int n){
    int i, j, min_ind;

    for (i = 0; i < n-1; i++){
        
        min_ind = i;
        
        for(int j = i+1; j < n-1; j++){
            if(arr[j] < arr[min_ind]){
                min_ind = j;
            }}

        if(min_ind != i){
            swap(&arr[min_ind], &arr[i]);
            }
    }
}
int main(){
    int a[] = {2,6,8,4,5,1};
    int size;

    size = sizeof(a) / sizeof(a[0]);

    /*Bubble Sort
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(a[j] < a[i]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }*/
    selectionSort(a, size);

    cout << "\nNumber of elements in Array: "<<size<<endl;
    cout << "After Sorting : ";
    for(int n = 0; n < size; n++){
        cout << a[n] <<" ";
    }

}