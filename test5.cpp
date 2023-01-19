#include <iostream>
#include <string.h>


using namespace std;

int main(){
    int i = 0;
    int value[] = {};
    int svalue[] = {};
    int max_number_items = 5;
        
        for (int i = 0; i <= max_number_items; i++){
        do{cout << "Enter volume and value of item["<<i<<"]: ";
        }
        while(cin >> value[i] >> svalue[i++]);
        }
    

	return 0;
}