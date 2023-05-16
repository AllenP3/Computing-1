#include "morsecode.h"

using namespace std;


void read(string& input_ref)
{
    // your code here
	return;
}


string encode(const string& input_ref)
{
	
	// make Morse code encoding work for all lower case letters and numbers 1, 2, ..., 0.
	string letters = { ' ', 'a', 'b', 'c', 'd', 'e', 'f'}; 
  	vector<string> morse_letters = { "    ", ". ___", "___ . . .", "___ . ___ .", "___ . .", ".", ". . ___ .", "___ ___ .", ". . . .", ". .", ". ___ ___ ___", "___ . ___", ". ___ . .",  "___ ___", "___ .", "___ ___ ___", ". ___ ___ .", "___ ___ . ___", ". ___ .", ". . .", "_", ". . ___", ". . . ___", ". ___ ___", "___ . . ___", "___ . ___ ___", "___ ___ . .", ". ___ ___ ___ ___", ". . ___ ___ ___", ". . . ___ ___", ". . . . ___", ". . . . .", "___ . . . .", "___ ___ . . .", "___ ___ ___ . .", "___ ___ ___ ___ .", "___ ___ ___ ___ ___"};

	string output;
	bool found = false;
	
	for (size_t i = 0; i < input_ref.size(); i++) {
	   found = false;
       for (size_t j = 0; j < letters.size(); j++) {
          if (input_ref[i] == letters[j]) {
             output += morse_letters[j];
             output += " || ";
             found = true;
             break;
          }  	  
       }
       if (!found){
          output += " ? ";
          output += " || ";
	   }

   }
		
   return output;

}