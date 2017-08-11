/*
 * main.cpp
 *
 * Created on: 13 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 8.4: fig08_04.cpp
// Pointer operators & and *.
// ampersand is the address of operator, determines the location
// of a variable in memory
// asterisk or star operator is called the pointer dereferencing
// operator, when it is applied to a pointer it gives you the value
// at the location in memory that the pointer points to
#include <iostream>
using std::cout;
using std::endl;

// by default in C++, variables are passed by value not by reference
// unless you passed an array which is a pointer to the first
// element in the array

int main() {
	int a; // a is an integer
	int *aPtr; // aPtr is an int * -- pointer to an integer
	// a pointer to an integer is a variable that stores the
	// address of an integer variable in memory

	a = 7; // assigned 7 to a
	aPtr = &a; // assign the address of a to aPtr

	cout << "The address of a is " << &a
		<< "\nThe value of aPtr is " << aPtr;
	// dereferencing the pointer to get the value stored
	// in the variable it points to
	cout << "\n\nThe value of a is " << a
		<< "\nThe value of *aPtr is " << *aPtr;
	cout << "\nShowing that * and & are inverses of "
		<< "each other.\n&*aPtr = " << &*aPtr
		<< "\n*&aPtr = " << *&aPtr << endl;
	return 0; // indicates successful termination
} // end main
