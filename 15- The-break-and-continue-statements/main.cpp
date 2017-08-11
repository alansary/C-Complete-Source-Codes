/*
 * main.cpp
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 5.13: fig05_13.cpp
// break statement exiting a for statement.
#include <iostream>
using std::cout;
using std::endl;

int main() {
	int count; // control variable also used after loop termminates

	for (count = 1; count <= 10; count++) { // loop 10 times
		if (count == 5) // if count is 5,
			break;		// terminate loop
		if (count == 2) // if count is 2,
			continue;	// skip remaining code in the loop
						// and jump to the next iteration
		cout << count << " ";
	} // end for
	cout << "\nUsed continue to skip printing 2" << endl;
	cout << "Broke out of loop at count = " << count << endl;
	return 0; // indicate successful termination
} // end main
