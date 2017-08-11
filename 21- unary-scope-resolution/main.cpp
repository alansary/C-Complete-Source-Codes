/*
 * main.cpp
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 6.22: fig06_22.cpp
// Using the unary scope resolution operator.
#include <iostream>
using std::cout;
using std::endl;

int number = 7; // global variable named number

int main() {
	double number = 10.5; // local variable named number
	// the local variable hides the global variable through out its scope,
	// in our case, it is main

	// display values of local and global variables
	cout << "Local double value of number = " << number
		<< "\nGlobal int value of number = " << ::number << endl;
	return 0; // indicates successful termination
} // end main
