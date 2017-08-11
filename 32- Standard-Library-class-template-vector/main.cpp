/*
 * main.cpp
 *
 * Created on: 13 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 7.26: fig07_26.cpp
// Demonstrating C++ Standary Library class template vector.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <vector>
using std::vector;

// the vector is passed by reference here, and we applied const to
// prevent the function from modifying the vector
void outputVector(const vector<int> &); // display the vector
void inputVector(vector<int> &); // input values into the vector

int main() {
	// vector is a dynamically resizable array, it can grow to
	// accommodate additional elements
	// this is a call to the class vector constructor
	// elements get initialized by default in the vector to zero
	// vectors are allocated dynamically
	vector<int> integers1(7); // 7-element vector<int>
	vector<int> integers2(10); // 10-element vector<int>

	// print integers1 size and contents
	cout << "Size of vector integers1 is " << integers1.size()
		<< "\nvector after initialization:" << endl;
	outputVector(integers1);

	// print integers2 size and contents
	cout << "\nSize of vector integers2 is " << integers2.size()
		<< "\nvector after initialization:" << endl;
	outputVector(integers2);

	// input and print integers1 and integers2
	cout << "\nEnter 17 integers:" << endl;
	inputVector(integers1);
	inputVector(integers2);

	cout << "\nAfter input, the vectors contain:\n"
		<< "integers1:" << endl;
	outputVector(integers1);
	cout << "integers2:" << endl;
	outputVector(integers2);

	// use inequality (!=) operator with vector objects
	cout << "\nEvaluating: integers1 != integers2" << endl;

	// you can not compare arrays with a comparison operator
	if (integers1 != integers2)
		cout << "integers1 and integers2 are not equal" << endl;

	// create vector integers3 using integers1 as an initializer;
	// print size and contents
	vector<int> integers3(integers1); // copy constructor

	cout << "\nSize of vector integers3 is " << integers3.size()
		<< "\nvector after initialization:" << endl;
	outputVector(integers3);

	// use assignment (=) operator with vector objects
	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1 = integers2; // assign integers2 to integer1

	cout << "integers1:" << endl;
	outputVector(integers1);
	cout << "integers2:" << endl;
	outputVector(integers2);

	// use equality (==) operator with vector objects
	cout << "\nEvaluating: integers1 == integers2" << endl;

	if (integers1 == integers2)
		cout << "integers1 and integers2 are equal" << endl;

	// use square brackets to create rvalue
	cout << "\nintegers1[5] is " << integers1[5];

	// use square brackets to create lvalue
	cout << "\n\nAssigning 1000 to integers1[5]" << endl;
	integers1[5] = 1000;
	cout << "integers1:" << endl;
	outputVector(integers1);

	// attempt to use out-of-range subscript (bounds checking)
	// using square brackets, there is no bounds checking in order to behave
	// the same way as arrays; however, there is another way to enforce bounds
	// checking by using the at() member function
	cout << "\nAttempt to assign 1000 to integers1.at(15)" << endl;
	integers1.at(15) = 1000; // ERROR: out of range
	return 0;
} // end main

// output vector contents
void outputVector(const vector<int> &array) {
	// the method size() returns an integer of type size_t
	// which is defined in the header file <vector>
	// this is just an unsigned integer type that represent sizes
	// it is actually a type definition
	size_t i; // declare control variable
	for (i = 0; i < array.size(); i++) {
		// the designers have overloaded the square brackets operator
		// to work with vector so that you can use it with vectors
		cout << setw(12) << array[i];

		if ((i+1) % 4 == 0) // numbers per row of output
			cout << endl;
	} // end for

	if (i % 4 != 0) // last line doesn't contain four elements
		cout << endl;
} // end function outputVector

// input vector contents
void inputVector(vector<int> &array) {
	for (size_t i = 0; i < array.size(); i++)
		cin >> array[i];
} // end function inputVector
