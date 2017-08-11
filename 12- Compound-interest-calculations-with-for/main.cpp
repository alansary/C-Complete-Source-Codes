/*
 * main.cpp
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

/*
 * Remark:
 * A non-sticky parameterized stream manipulator basically
 * says that it is applied only to the very next value that gets output.
 * setw is a non-sticky stream manipulator
 * setprecision and fixed are sticky stream manipulators
 * because from the moment that you set them by outputting
 * them to a cout object, they apply to all subsequent floating point values
 */
// Fig. 5.6: fig05_06.cpp
// compound interest calculations with for.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
// fixed is a sticky stream manipulator

#include <iomanip>
using std::setw; // enables program to set a field width
// right-justified in a field of width x
// setw is a non-sticky stream manipulator
using std::setprecision;
// setprecision is a sticky stream manipulator

#include <cmath> // standard C++ math library
using std::pow; // enables program to use function pow
// allows you to raise a value to a power, first argument must be a double value

int main() {
	double amount; // amount on deposit at end of each year
	double principal = 1000.0; // initial amount before interest
	double rate = .05; // interest rate

	// display headers
	cout << "Year" << setw( 21 ) << "Amount on deposit" << endl;

	// set floating-point number format
	cout << fixed << setprecision( 2 );

	// calculate amount on deposit for each of ten years
	for (int year = 1; year <= 10; year++) {
		// calculate new amount for specified year
		amount = principal * pow(1.0 + rate, year);

		// display the year and the amount
		cout << setw(4) << year << setw(21) << amount << endl;
	} // end for

	return 0; // indicate successful termination
} // end main
