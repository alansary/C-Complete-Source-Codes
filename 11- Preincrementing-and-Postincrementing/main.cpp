/*
 * main.cpp
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 4.17: fig04_17.cpp
// Preincrementing and postincrementing
#include <iostream>
using std::cout;
using std::endl;

int main() {
	int c;

	// demonstrate preincrement
	c = 5; // assign 5 to c
	cout << c << endl; // print 5
	cout << c++ << endl; // print 5 then postincrement
	cout << c << endl; // print 6

	cout << endl; // skip a line

	// demonstrate preincrement
	c = 5; // assign 5 to c
	cout << c << endl; // print 5
	cout << ++c << endl; // preincrement then print 6
	cout << c << endl; // print 6
	return 0; // indicate successful termination
} // end main
