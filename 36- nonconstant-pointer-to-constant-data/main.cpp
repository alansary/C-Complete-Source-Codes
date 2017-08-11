/*
 * main.cpp
 *
 * Created on: 13 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 8.11: fig08_11.cpp
// Printing a string one character at a time using
// a non-constant pointer to constant data.
#include <iostream>
using std::cout;
using std::endl;

// const char * is a pointer to a character constant
// or we can say that *cPtr is a character constant
void printCharacters(const char *); // print using pointer to const data
// try to modify the data and you will get a compilation error

int main() {
	const char phrase[] = "print characters of a string";

	cout << "The string is:\n";
	printCharacters(phrase); // print characters in phrase
	cout << endl;
	return 0; // indicates successful termination
} // end main

// sPtr can be modified, but it cannot modify the character to which
// it points, i.e., sPtr is a "read-only" pointer
// applying the principle of least privilege
// any time you don't want the data to be modified, you should
// use the keyword const
void printCharacters(const char *sPtr) {
	for (; *sPtr != '\0'; sPtr++) // no initialization
		cout << *sPtr; // display character without modification
} // end function printCharacters
