/*
 * main.cpp
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 5.11: fig05_11.cpp
// do...while repetition statement.
#include <iostream>
using std::cout;
using std::endl;

int main() {
	int counter = 1; // initialize counter

	// do...while executes at least ones
	do {
		cout << counter << " "; // display counter
		counter++; // increment counter
	} while (counter <= 10); // end do...while
	// don't forget the semicolon

	cout << endl; // output a newline
	return 0; // indicate successful termination
} // end main
