/*
 * main.cpp
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 6.17: fig06_17.cpp
// Using an inline function to calculate the volume of a cube.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Definition of inline function cube. Definition of function appears
// before function is called, so a function prototype is not required.
// First line of function definition acts as the prototype.
// declaring a function as an inline function means that the compiler has
// the option to replace the call of the function with the actual source code
// to eliminate the overhead of the function call
// we say option because if the function is too complex, the compiler will typically
// ignore the inline suggestion
inline double cube(const double side) {
	return side * side * side; // calculate cube
} // end function cube

// Note that: whenever you fully define a member-function inside the class's curly
// braces, there are an implicit inline added to the function definition and the
// compiler will try to inline the code for that function whenever it gets called

int main() {
	double sideValue; // stores value entered by user
	cout << "Enter the side lelngth of your code: ";
	cin >> sideValue; // read value from user

	// calculate cube of sideValue and display result
	cout << "Volume of cube with side "
		<< sideValue << " is " << cube( sideValue ) << endl;
	return 0; // indicate successful termination
} // end main
