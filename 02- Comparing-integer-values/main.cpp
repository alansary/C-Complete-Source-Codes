/*
 * main.cpp
 * Created on: 11 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 2.9: fig02_09.cpp
// Comparing integers using if statements, relational operators
// and equality operators.
#include <iostream> // allows program to perform input and output

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl;
// endl is a stream manipulator that flushes the output buffer
// every thing within the standard library is wrapped within a namespace
// namespaces help us identify the containers of the names

// Never do that! Naming Collision
//using namespace std;
// every thing from the standard namespace that is included in this file
// is allowed to be used by the program

// function main begins program execution
int main() {
	int number1; // first integer to compare
	int number2; // second integer to compare
	// These variables have garbage values at the moment

	cout << "Enter two integers to compare: "; // prompt user for data
	cin >> number1 >> number2; // read two integers from user
	// >> stream extraction operator
	// When you input invalid data type, it will use the garbage value stored
	// within the variable because it didn't encounter the correct data type
	// Note that: if the first input fails, it doesn't even continue to get the value
	// for further variables

	// = is the assignment operator, every assignment expression has a value, its
	// value is the same as the value that gets placed on the variable on the LHS
	// 0 is false and any non-zero value is true
	// A very hard to find logical error
	int test;
	if (test = 0) cout << "Never happens\n";
	else cout << "Hello, there\n";
	if (test = -1) cout << "Hello, there\n";
	else cout << "Never happens\n";
	if (number1 == number2)
		cout << number1 << " == " << number2 << endl;
	// Flushing the buffer is useful when we write to files to be sure that
	// the writing process works fine
	if (number1 != number2)
		cout << number1 << " != " << number2 << endl;
	if (number1 < number2)
		cout << number1 << " < " << number2 << endl;
	if (number1 > number2)
		cout << number1 << " > " << number2 << endl;
	if (number1 >= number2)
		cout << number1 << " >= " << number2 << endl;
	if (number1 <= number2)
		cout << number1 << " <= " << number2 << endl;
	return 0;
}
