/*
 * main.cpp
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 6.23: fig06_23.cpp
// Overloaded functions.
#include <iostream>
using std::cout;
using std::endl;

// the concept of overloaded functions in C++ allows
// you to create as many functions with the same name
// as you like as long as their signature are different
// the signature of a function consists of the name of
// the function and its parameter list
// the parameter list may differ in the number of the parameters
// or the type of the parameters in the parameter list
// the main concept behind the scene which allow the compiler
// to differentiate between the different functions with their
// signatures is name decoration, we actually get a logical names
// behind the scene
// name decoration doesn't exist in C, this overloading of functions will give
// you a compilation error in C

// function square for int values
int square( int x ) {
	cout << "square of integer " << x << " is ";
	return x * x;
} // end function square with int argument

// function square for double values
double square( double y ) {
	cout << "square of double " << y << " is ";
	return y * y;
} // end function square with double argument

int main() {
	cout << square( 7 ); // calls int version
	cout << endl;
	cout << square( 7.5 ); // calls double version
	cout << endl;
	return 0; // indicate successful termination
} // end main
