/*
 * main.cpp
 *
 * Created on: 14 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 8.14: fig08_14.cpp
// Attempting to modify a constant pointer to constant data.
#include <iostream>
using std::cout;
using std::endl;

int main() {
	int x = 5, y;

	// ptr is a constant pointer to a constant integer.
	// ptr always points to the same location; the integer
	// at that location cannot be modified using this pointer.
	const int *const ptr = &x;

	cout << *ptr << endl;

	//*ptr = 7; // error: *ptr is a const; cannot assign new value
	//ptr = &y; // error: ptr is const; cannot assign new address

	// intPtr is a pointer to an integer constant
	const int *intPtr = &x;
	intPtr = &y;
	// xPtr is a constant pointer to an integer
	int * const xPtr = &x;
	*xPtr = 10;
	return 0; // indicates successful termination
} // end main
