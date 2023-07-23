#include <iostream>

using namespace std;

//function to increase a number
//give me a vector with the number and the size of the vector
//and I will increase the number
void increase(int *number, int size)
{
    int i = 0;
    while (i < size)
    {
        number[i] = number[i] + 1;
        i++;
    }
}
int main(){
    int number[5] = {1,2,3,4,5};
    increase(number, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << number[i] << endl;
    }
    return 0;
}