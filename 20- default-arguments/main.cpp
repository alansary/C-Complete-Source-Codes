/*
 * main.cpp
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 6.21: fig06_21.cpp
// Using default arguments.
#include <iostream>
using std::cout;
using std::endl;

// function prototype that specifies default arguments
int boxVolume( int length = 1, int width = 1, int height = 1 );
// default arguments must be at the end of the set of arguments
// if you specified a default argument, it can not be preceeded
// with another non-default argument
// if any of the given arguments has a default value, all of the
// arguments to its right must also have default values
// the default values are specified in the function prototype
// and they are not specified in the function definition, the
// reason for that is normally function prototypes are placed
// into header files and those header files get included whenever
// you intend to use the function. The source code which will call
// the function boxVolume needs to now what those defaults are and
// it also need to know how to call the function and those are the
// things that you specify with a function prototype

int main() {
	// no arguments--use default values for all dimensions
	cout << "The default box volume is: " << boxVolume();

	// specify length; default width and height
	cout << "\n\nThe volume of a box with length 10,\n"
		<< "width 1 and height 1 is: " << boxVolume( 10 );

	// specify length and width; default height
	cout << "\n\nThe volume of a box with length 10,\n"
		<< "width 5 and height 1 is: " << boxVolume( 10, 5 );

	// specify all arguments
	cout << "\n\nThe volume of a box with length 10,\n"
		<< "width 5 and height 2 is: " << boxVolume( 10, 5, 2 )
		<< endl;

	return 0; // indicates successful termination
} // end main

// function boxVolume calculates the volume of a box
int boxVolume( int length, int width, int height ) {
	return length * width * height;
} // end function boxVolume
