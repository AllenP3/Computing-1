#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<int>> grades = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

   //  int grades[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; //3 by 3 array each {} is a row

        for(int r = 0; r < 3; r++){
            for(int c = 0; c < 3; c++){
                    cout <<grades[r][c] << "\t";
            }
            cout << endl;
        }
    
    return 0;
}