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