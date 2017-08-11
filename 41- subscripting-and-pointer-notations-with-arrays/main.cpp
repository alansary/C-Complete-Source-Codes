/*
 * main.cpp
 *
 * Created on: 14 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 8.20: fig08_20.cpp
// Using subscripting and pointer notations with arrays.
#include <iostream>
using std::cout;
using std::endl;

int main() {
	// the name of the array is a constant pointer to its first element
	// the pointer bPtr is a nonconstant pointer to the first element
	// of the array
	int b[] = {10, 20, 30, 40}; // create 4-element array b
	int *bPtr = b; // set bPtr to point to array b

	// output array b using array subscript notation
	cout << "Array b printed with: \n\nArray subscript notation\n";

	// the index value is really an offset indicates how many positions
	// we wish to move from the beginning of the array
	for (int i = 0; i < (sizeof b / sizeof(int)); i++)
		cout << "b[" << i << "] = " << b[i] << '\n';

	// output array b using the array name and pointer/offset notation
	// the name of the array is a pointer to the first element of the
	// array
	cout << "\nPointer/offset notation where "
		<< "the pointer is the array name\n";

	for (int offset1 = 0; offset1 < 4; offset1++)
		cout << "*(b + " << offset1 << ") = " << *(b + offset1) << '\n';

	// output array b using bPtr and array subscript notation
	cout << "\nPointer subscript notation\n";

	for (int j = 0; j < 4; j++)
		cout << "bPtr[" << j << "] = " << bPtr[j] << '\n';

	cout << "\nPointer/offset notation\n";

	// output array b using bPtr and pointer/offset notation
	for (int offset2 = 0; offset2 < 4; offset2++)
		cout << "*(bPtr + " << offset2 << ") = "
			<< *(bPtr + offset2) << '\n';

	return 0; // indicates successful termination
} // end main
