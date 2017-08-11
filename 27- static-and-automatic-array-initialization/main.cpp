/*
 * main.cpp
 *
 * Created on: 13 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 7.13: fig07_13.cpp
// Static arrays are initialized to zero.
#include <iostream>
using std::cout;
using std::endl;

void staticArrayInit(void); // function prototype
void automaticArrayInit(void); // function prototype
// void keyword presented in the parameter list is not required
// in C++

int main() {
	// C++ doesn't initialize variables for you, variables
	// will contain garbage values until you initialize them
	cout << "First call to each function:\n";
	// when you have a static local variable, the variable gets
	// created once at the time that you first encounter its
	// declaration, and then it will exist for the rest of the
	// program running time
	staticArrayInit();
	// each time we call the function, the array will be created
	// and at the end it will be deallocated
	automaticArrayInit();

	cout << "\n\nSecond call to each function:\n";
	staticArrayInit();
	automaticArrayInit();
	cout << endl;

	return 0; // indicates successful termination
} // end main

// function to demonstrate a static local array
void staticArrayInit(void) {
	// initializes elements to 0 first time function is called
	// here is one exception to the rule that variables don't get
	// initialized, when you declare a static local array, the elements
	// of the array will be initialized the first time the function is
	// called to zero unless you specify otherwise with a list of initializers
	static int array1[3]; // static local array
	cout << "\nValues on entering staticArrayInit:\n";
	// output contents of array1
	for (int i = 0; i < 3; i++)
		cout << "array1[" << i << "] = " << array1[i] << " ";
	cout << "\nValues on exiting staticArrayInit:\n";
	// modify and output contents of array1
	for (int j = 0; j < 3; j++)
		cout << "array1[" << j << "] = " << (array1[j] += 5) << " ";
} // end function staticArrayInit

// function to demonstrate an automatic local array
void automaticArrayInit(void) {
	// initializes elements each time function is called
	// the next time the function is called, that array will be created again
	int array2[3] = {1, 2, 3}; // automatic local array
	cout << "\n\nValues on entering automaticArrayInit:\n";
	// output contents of array2
	for (int i = 0; i < 3; i++)
		cout << "array2[" << i << "] = " << array2[i] << " ";
	cout << "\nValues on exiting automaticArrayInit:\n";
	// modify and output contents of array2
	for (int j = 0; j < 3; j++)
		cout << "array2[" << j << "] = " << (array2[j] += 5) << " ";
} // end function automaticArrayInit
