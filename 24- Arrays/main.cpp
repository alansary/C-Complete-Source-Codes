/*
 * main.cpp
 *
 * Created on: 13 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 7.3: fig07_03.cpp
// Initializing an array.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
	// contiguous memory allocation
	// dynamic access, access time is O(1)
	// indexed
	// name of the array is a pointer to the first element in the array
	int n[10]; // n is an array of 10 integers
	// initialize elements of array n to 0
	for (int i = 0; i < 10; i++) n[i] = 0; // set element at location i to 0
	cout << "Element" << setw(13) << "Value" << endl;
	// output each array element's value
	for (int j = 0; j < 10; j++)
		cout << setw(7) << j << setw(13) << n[j] << endl;
	return 0; // indicate successful termination
} // end main
