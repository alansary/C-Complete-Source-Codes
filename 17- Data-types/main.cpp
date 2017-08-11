/*
 * main.cpp
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	// Promotion hierarchy for fundamental data types.
	// Converting from higher to lower types results in loss of precision.
	// When evaluating an expression, all types must be converted to the highest
	// type before evaluation actually happens.
	// Promotions happen also when passing parameters to a function.
	// These conversions occur implicitly when evaluating an expression or passing
	// parameters to a function or even when using an assignment statement.
	// You can also make an explicit conversion using static_cast<type>(variable)
	cout << "Size of long double: " << sizeof(long double) << endl;
	cout << "Size of double: " << sizeof(double) << endl;
	cout << "Size of float: " << sizeof(float) << endl;

	cout << "Size of unsigned long int: " << sizeof(unsigned long int) << endl;
	cout << "Size of unsigned long: " << sizeof(unsigned long) << endl;

	cout << "Size of long int: " << sizeof(long int) << endl;
	cout << "Size of long: " << sizeof(long) << endl;

	cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
	cout << "Size of unsigned: " << sizeof(unsigned) << endl;

	cout << "Size of int: " << sizeof(int) << endl;

	cout << "Size of unsigned short int: " << sizeof(unsigned short int) << endl;
	cout << "Size of unsigned short: " << sizeof(unsigned short) << endl;

	cout << "Size of short int: " << sizeof(short int) << endl;
	cout << "Size of short: " << sizeof(short) << endl;

	cout << "Size of unsigned char: " << sizeof(unsigned char) << endl;
	cout << "Size of char: " << sizeof(char) << endl;

	cout << "Size of bool: " << sizeof(bool) << endl;
	return 0;
}
