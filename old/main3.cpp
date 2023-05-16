#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

void extract_remainder_string(char* input_string_ptr, int input_length, int start_position, char* remainder_string_ptr) {
    // Your code here; implement as specified in the description.
    static int rem = 0;
    if(input_length == 0 || input_length < 0){
        remainder_string_ptr[0] = (abs(input_length%10) + '0');
        remainder_string_ptr[1] = '\0'; 
    }
    else if(start_position < 0){
        if(start_position > -10){
            remainder_string_ptr[0] = '0';
            remainder_string_ptr[1] = '\0';
        }
        else if(start_position <= -10){
            remainder_string_ptr[0] = '1';
            remainder_string_ptr[1] = '\0';
        }
            
    }
    else if(start_position >= input_length){
        remainder_string_ptr[0] = '>';
            remainder_string_ptr[1] = '\0';
    }
    else{
        if(input_string_ptr = nullptr){
             remainder_string_ptr[0] = '-';
             remainder_string_ptr[1] = '1';
            remainder_string_ptr[2] = '\0';
        }
        else{
            for(int i = start_position; i <= input_length; i++){
                remainder_string_ptr[rem] = input_string_ptr[i];
                rem++;
            }
            remainder_string_ptr[rem+1] = '\0';
        }
        
    }

}

int main()
{
    const int kStringLength = 256;
	char input_string[kStringLength] = "Hello World";
	char remainder_string[kStringLength] = "";
	int string_length = strlen(input_string); // string_length == 11, as "Hello World" has 11 characters

	extract_remainder_string(input_string, string_length, 6, remainder_string);
	
	cout<< remainder_string << std::endl;
	
	return 0;
}