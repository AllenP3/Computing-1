#include "Linear.h"

#include <iostream>
using namespace std;

void Read( int* a_ptr, int* address_offset_ptr, int max_size )
{
	std::cout << "\nEnter integers. Terminate with EOF.\n";
	*address_offset_ptr = 0;
	do {
		std::cout << "*(a_ptr + " << *address_offset_ptr << "): ";
	} while (std::cin >> *(a_ptr+(*address_offset_ptr)++) && *address_offset_ptr <= max_size);
	--(*address_offset_ptr); // do not count the EOF
	std::cin.clear();
	std::cin.ignore(256, '\n');
	return;
}


void Print( const int* a_ptr, int size )
{
    for(int i = 0; i < size; i++)
    {
        cout << *(a_ptr+i) << " ";
    }
}
int LinearSearch( const int* a_ptr, int key, int size )
{   
    int found = 0;
    for(int i = 0 ; i < size; i++)
    {
        if(*(a_ptr+i) == key)
            return i;
            found ++;
    }
    if (found != 0)
    return -1;   
} 