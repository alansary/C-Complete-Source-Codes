/*
 * main.cpp
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 6.18: fig06_18.cpp
// Comparing pass-by-value and pass-by-reference with references.
#include <iostream>
using std::cout;
using std::endl;

int squareByValue( int ); // function prototype (value pass)
void squareByReference( int & ); // function prototype (reference pass)
// the ampersand means that the parameter is being received by reference
void squareByReferencePointer( int * ); // function prototype (reference pass using pointers)

int main() {
	int x = 2; // value to square using squareByValue
	int z = 4; // value to square using squareByReference
	int y = 6; // value to square using squareByReferencePointer

	// demonstrate squareByValue
	cout << "x = " << x << " before squareByValue\n";
	cout << "Value returned by squareByValue: "
		<< squareByValue( x ) << endl;
	cout << "x = " << x << " after squareByValue\n" << endl;

	// demonstrate squareByReference
	cout << "z = " << z << " before squareByReference" << endl;
	squareByReference( z );
	cout << "z = " << z << " after squareByReference\n" << endl;

	// demonstrate squareByReferencePointer
	cout << "y = " << y << " before squareByReferencePointer" << endl;
	squareByReferencePointer( &y );
	cout << "y = " << y << " after squareByReferencePointer" << endl;
	return 0; // indicate successful termination
} // end main

// squareByValue multiplies number by itself, stores the
// result in number and returns the new value of number
int squareByValue( int number ) {
	return number *= number; // caller's argument not modified
} // end function squareByValue

// squareByReference multiplies numRef by itself and stores the
// result in the variable to to which numRef refers in function main
void squareByReference( int & numRef ) {
	numRef *= numRef; // caller's argument modified
} // end function squareByReference

// squareByReferencePointer dereferences the pointer to get the value of the
// location which it points to, multiplies this value with it self and then
// stores the result back in the same location which the pointer points to
void squareByReferencePointer( int * pointer ) {
	*pointer *= *pointer; // caller's argument modified
} // end function squareByReferencePointer
