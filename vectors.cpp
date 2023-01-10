#include <iostream>
#include <vector>

using namespace std;

void Print(const vector<vector<int>>&matrix_ref){
    size_t no_rows = matrix_ref.size();
    size_t no_cols = matrix_ref[0].size();

    for(size_t r = 0; r < no_rows; r++){
        for(size_t c = 0; c < no_cols; c++){
            cout << matrix_ref[r][c] << " ";
        }
        cout << endl;
    }
}
int main(void) {
   
   vector<int>v = {1,2,3};
    int s = 0;
    v.insert(v.end(), 5);
    cout <<v[0];

}