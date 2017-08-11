/*
 * main.cpp
 *
 * Created on: 13 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 8.10: fig08_10.cpp
// Converting a string to uppercase using a
// nononstant pointer to nonconstant data.
#include <iostream>
using std::cout;
using std::endl;

#include <cctype> // prototype for islower and toupper
using std::islower; // islower determines if a given
// character is a lowercase letter
using std::toupper; // to upper converts a given character
// to it uppercase version

void convertToUppercase(char *);

int main() {
	char phrase[] = "characters and $32.98";

	cout << "The phrase before conversion is: " << phrase;
	convertToUppercase(phrase);
	cout << "\nThe phrase after conversion is: " << phrase << endl;
	return 0; // indicates successful termination
} // end main

// convert string to uppercase letters
void convertToUppercase(char *sPtr) {
	while (*sPtr != '\0') { // loop while current character is not '\0'
		if (islower(*sPtr)) // if character is lowercase,
			*sPtr = toupper(*sPtr); // convert to uppercase

		sPtr++; // moves sPtr to next character in stirng
		// incrementing a pointer will make that pointer points to the next
		// data element in the array; that is, it adds sizeof(type) to its
		// previous value
	} // end while
} // end function convertToUppercase
