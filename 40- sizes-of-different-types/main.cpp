/*
 * main.cpp
 *
 * Created on: 14 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 8.17: fig08_17.cpp
// Demonstrating the sizeof operator
#include <iostream>
using std::cout;
using std::endl;

int main() {
	// when you get the sizeof a data type, you must use parenthesis
	// when you get the sizeof an object like a variable of some time, you don't
	// have to use parenthesis
	char c; // variable of type char
	short s; // variable of type short
	int i; // variable of type int
	long l; // variable of type long
	float f; // variable of type float
	double d; // variable of type double
	long double ld; // variable of type long double
	int array[20]; // array of int
	int *ptr = array; // variable of type int *
	bool b; // variable of type bool

	cout << "sizeof c = " << sizeof c
		<< "\tsizeof(char) = " << sizeof(char)
		<< "\nsizeof s = " << sizeof s
		<< "\tsizeof(short) = " << sizeof(short)
		<< "\nsizeof i = " << sizeof i
		<< "\t sizeof(int) = " << sizeof(int)
		<< "\nsizeof l = " << sizeof l
		<< "\tsizeof(long) = " << sizeof(long)
		<< "\nsizeof f = " << sizeof f
		<< "\tsizeof(float) = " << sizeof(float)
		<< "\nsizeof d = " << sizeof d
		<< "\tsizeof(double) = " << sizeof(double)
		<< "\nsizeof ld = " << sizeof ld
		<< "\tsizeof(long double) = " << sizeof(long double)
		<< "\nsizeof array = " << sizeof array
		<< "\nsizeof ptr = " << sizeof ptr
		<< "\nsizeof b = " << sizeof b
		<< "\tsizeof(bool) = " << sizeof(bool) << endl;
	return 0; // indicates successful termination
} // end main
