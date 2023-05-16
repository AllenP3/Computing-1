#include <iostream>

using namespace std;

int main(void){
    cout << "Decimal" << "\t" <<"Octal"<< "\t" << "Hexadecimal"<<endl;
    
    for (int x=1; x <=256; x++){
        cout << x <<oct<< "\t"<< x <<hex << "\t" << x << dec <<endl;
        
    }
    
    return 0;
}
