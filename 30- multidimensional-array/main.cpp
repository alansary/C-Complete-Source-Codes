/*
 * main.cpp
 *
 * Created on: 13 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 7.22: fig07_22.cpp
// Initializing multidimensional arrays.
#include <iostream>
using std::cout;
using std::endl;

void printArray(const int[][3]); // prototype

int main() {
	int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
	// the remaining uninitialized elements would be set to zero
	int array2[2][3] = {1, 2, 3, 4, 5};
	// the remaining uninitialized elements would be set to zero
	int array3[2][3] = {{1, 2}, {4}};

	cout << "Values in array1 by row are:" << endl;
	printArray(array1);

	cout << "\nValues in array2 by row are:" << endl;
	printArray(array2);

	cout << "\nValues in array3 by row are:" << endl;
	printArray(array3);
	return 0; // indicates successful termination
} // end main

// output array with two rows and three columns
// the second dimension of the multidimensional array is required
// because in memory in C++ a 2 rows and 3 columns array is allocated
// as a one block of six integers where the first three integers
// represent the first row and the next three integers represent the
// second row
// the number in the second dimension tells the compiler that every row
// consists of three elements and that's how the compiler is able to
// figure out in memory where each new row starts in memory
// the second dimension is not optional, it is a must
void printArray(const int a[][3]) {
	// loop through array's rows
	// I hard coded the loops without passing the number
	// or rows and the number of columns
	for (int i = 0; i < 2; i++) {
		// loop through columns of current row
		for (int j = 0; j < 3; j++)
			cout << a[i][j] << ' ';

		cout << endl; // start new line of output
	} // end outer for
} // end function printArray
