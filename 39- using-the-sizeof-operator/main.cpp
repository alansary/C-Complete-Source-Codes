/*
 * main.cpp
 *
 * Created on: 14 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 8.16: fig08_16.cpp
// sizeof operator when applied to an array name
// returns the number of bytes in the array.
#include <iostream>
using std::cout;
using std::endl;

// the sizeof operator is applied at compile time

size_t getSize(double *); // prototype

int main() {
	double array[20]; // 20 doubles; occupies 160 bytes on our system

	cout << "The number of bytes in the array is " << sizeof(array);

	// we will pass a pointer that points to the first element
	// of the array to the function getSize
	cout << "\nThe number of bytes returned by getSize is "
		<< getSize(array) << endl;
	return 0; // indicates successful termination
} // end main

// return size of ptr which is 8 bytes on my machine
size_t getSize(double *ptr) {
	return sizeof(ptr);
} // end function getSize
