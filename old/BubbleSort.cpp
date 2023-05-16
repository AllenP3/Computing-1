
#include <iostream>
void Read(int a[], int& n_ref, int max_size) {
	std::cout << "\nEnter integers. Terminate with EOF.\n";
	n_ref = 0;
	do {
		std::cout << "a[" << n_ref << "]: ";
	} while (std::cin >> a[n_ref++] && n_ref <= max_size);
	--n_ref; // do not count the EOF
	std::cin.clear();
	std::cin.ignore(256,'\n');

	return;
}


void Print(const int a[], int size) {
	// printing out the array elements
	for (int i = 0; i < size; i++) {
		std::cout << a[i] << " ";
	}

	return;
}

void BubbleSort(int a[], int size){
    
}