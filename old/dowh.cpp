#include <iostream>

using namespace std;

int main(void)
{
    char choice = '0';
    
    do {
        cout << endl;
        cout<< "Select 1 to select first choice." << endl;
        cout<< "Select 2 to select second choice." << endl;
        cout<< "Select 0 to exit." << endl;
        cout<< "Enter your choice and press Return: ";
        cin >> choice;
        
        switch (choice) {
            
            case '1':
                cout << "You have selected the first choice."<<endl;
                break;
            case '2':
                cout << "You have selected the second choice."<<endl;
                break;
            case '0':
                cout << "Good bye."<<endl;
                break;
            default:
                cout << "Not a valid choice. Choose again."<<endl;
                
        }
        }while (choice != '0');
        
        return 0;
        
    
}