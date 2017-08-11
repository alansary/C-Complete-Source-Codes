/*
 * main.cpp
 *
 * Created on: 13 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 7.4: fig07_04.cpp
// Initializing an array in a declaration
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
	// use inititlaizer list to initialize array n
	int n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
	cout << "Element" << setw(13) << "Value" << endl;
	// output each array element's value
	for (int i = 0; i < 10; i++)
		cout << setw(7) << i << setw(13) << n[i] << endl;
	cout << endl;

	// initializing a subset of the element, all remaining elements would be
	// set to zero by default or the equivalent of zero
	// if you provided more initializers, you will get a compilation error
	int x[10] = {0};
	cout << "Element" << setw(13) << "Value" << endl;
	for (int i = 0; i < 10; i++)
		cout << setw(7) << i << setw(13) << x[i] << endl;
	cout << endl;

	// you can provide the list of initializers without providing the size of
	// the array and in this case the compiler will count the number of initializers
	// and specify the length of the array for you
	int y[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << "Element" << setw(13) << "Value" << endl;
	for (int i = 0; i < 10; i++)
		cout << setw(7) << i << setw(13) << y[i] << endl;
	return 0; // indicates successful termination
} // end main
