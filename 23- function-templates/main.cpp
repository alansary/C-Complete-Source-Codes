/*
 * main.cpp
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 6.26: fig06_26.cpp
// Function template maximum test program.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// a function template is a generic representation of a function that
// can be used to generate source code for different versions of that
// function for different data types, it is a way of causing the compiler
// to do function overloading for you

#include "maximum.h" // include definition of function template maximum

int main() {
	// Note that: you must ensure that the types passed to the template function
	// are defined over the operators used in that template function

	// demonstrate maximum with int values
	int int1, int2, int3;

	cout << "Input three integer values: ";
	cin >> int1 >> int2 >> int3;

	// invoke int version of maximum
	cout << "The maximum integer value is: "
		<< maximum( int1, int2, int3 );

	// in the function call, the compiler looks first to see if there is
	// a function definition of maximum function that gets three integer
	// parameters, if there is a function definition with the previous
	// description, then it uses it, if it doesn't exist, then it looks
	// to see if it can generate a function definition (source code) that does.
	// it inserts T every where in the function template, it is actually write
	// a separate copy of this function without the template keyword and the T's.

	// demonstrate maximum with double values
	double double1, double2, double3;

	cout << "\n\nInput three double values: ";
	cin >> double1 >> double2 >> double3;

	// invoke double version of maximum
	cout << "The maximum double value is: "
		<< maximum( double1, double2, double3 );

	// demonstrate maximum with char values
	char char1, char2, char3;

	cout << "\n\nInput three characters: ";
	cin >> char1 >> char2 >> char3;

	// invoke char version of maximum
	cout << "The maximum character value is: "
		<< maximum( char1, char2, char3 ) << endl;
	return 0; // indicate successful termination
 // end main
}
