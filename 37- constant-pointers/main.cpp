/*
 * main.cpp
 *
 * Created on: 14 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 8.13: fig08_13.cpp
// Attempting to modify a constant pointer to nonconstant data.

// the name of an array is actually a constant pointer to the
// first element of the array, it cannot point to some other
// array or even another element in the same array

int main() {
	int x, y;

	// ptr is a constant pointer to an integer that can
	// be modified through ptr, but ptr always points to the
	// same memory location.
	int * const ptr = &x; // const pointer musb be initialized

	*ptr = 7; // allowed: *ptr is not const
	// ptr = &y; // error: ptr is const; cannot assign to it a new address
	return 0; // indicates successful termination
} // end main
