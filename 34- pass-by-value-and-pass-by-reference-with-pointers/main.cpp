/*
 * main.cpp
 *
 * Created on: 13 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 8.6: fig08_06.cpp
// Fig. 8.7: fig08_07.cpp
// Pass-by-value used to cube a variable's value.
// Pass-by-reference with a pointer argument used to cube a
// variable's value
#include <iostream>
using std::cout;
using std::endl;

int cubeByValue(int); // function prototype
void cubeByReference(int *); // function prototype

int main() {
	cout << "cubeByValue" << endl;
	int number = 5;

	cout << "The original value of number is " << number;

	number = cubeByValue(number); // pass number by value to cubeByValue
	cout << "\nThe new value of number is " << number << endl;

	cout << "cubeByReference" << endl;
	number = 5;

	cout << "The original value of number is " << number;

	cubeByReference(&number); // pass number address to cubeByReference
	// an address to a variable is a pointer to that variable

	cout << "\nThe new value of number is " << number << endl;
	return 0; // indicates successful termination
} // end main

// calculate and return cube of integer argument
int cubeByValue(int n) {
	return n * n * n; // cube local variable n and return result
} // end function cubeByValue

// calculate cube of *nPtr; modifies variable number in main
void cubeByReference(int *nPtr) {
	// dereferencing the pointer gives us the value stored in the
	// location it points to
	*nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
} // end function cubeByReference
