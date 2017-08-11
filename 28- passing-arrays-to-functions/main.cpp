/*
 * main.cpp
 *
 * Created on: 13 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 7.14: fig07_14.cpp
// Passing arrays and individual array elements to functions.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void modifyArray(int[], int); // appears strange; array and size
void modifyElement(int); // receive array element value
// in C/C++ arrays gets passed by reference by default to avoid
// copying the entire array from its memory locations to another
// memory locations, so modifying an array from a function actually
// affects the original array; however, array elements gets passed
// by value not by reference unless you specify otherwise and so
// modifying the passed array element value will not affect the
// original value of the array element.

int main() {
	// constants must be initialized with declaration, and can not
	// change value as long as the program is running
	const int arraySize = 5; // size of array a
	// whenever you want to specify the number of elements of the
	// array, it has to be a constant variable or a numeric literal, it cannot
	// be a variable or a function call to a function that returns a value.
	int a[arraySize] = {0, 1, 2, 3, 4}; // initialize array a

	cout << "Effectes of passing entire array by reference:"
		<< "\n\nThe values of the original array are:\n";

	// output original array elements
	for (int i = 0; i < arraySize; i++)
		cout << setw(3) << a[i];

	cout << endl;

	// pass array to modifyArray by reference
	modifyArray(a, arraySize);
	cout << "The values of the modified array are:\n";

	// output modified array elements
	for (int j = 0; j < arraySize; j++)
		cout << setw(3) << a[j];

	cout << "\n\n\nEffects of passing array element by value:"
		<< "\n\na[3] before modifyElement: " << a[3] << endl;

	modifyElement(a[3]); // pass array element a[3] by value
	cout << "a[3] after modifyElement: " << a[3] << endl;

	return 0; // indicates successful termination
} // end main

// in function modifyArray, "b" points to the original array "a" in memory
// note that: we don't specify the size of the array between the square brackets,
// technically this function can receive any one-dimensional integer array of any length.
// in reality, we don't receive the array a itself, but a the location in memory, in other
// words, we receive a pointer to the first element
// (the address of the first element in the array).
// to prevent the function from modifying the passed array, we can add the const keyword
// void modifyArray(const int b[], int sizeOfArray)
// in our case it will give us an error
void modifyArray(int b[], int sizeOfArray) {
	// multiply each array element by 2
	for (int k = 0; k < sizeOfArray; k++)
		b[k] *= 2;
} // end function modifyArray

// in function modifyElement, "e" is a local copy of
// array element a[3] passed from main
void modifyElement(int e) {
	// multiply parameter by 2
	cout << "Value of element in modifyElement: " << (e *= 2) << endl;
} // end function modifyElement
