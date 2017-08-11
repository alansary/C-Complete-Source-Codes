/*
 * main.cpp
 * Created on: 11 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 2.1: fig02_01.cpp
// Text-printing program.
#include <iostream> // includes cout to print a text on the screen

// main starts the program execution
// we can pass arguments to the main function to use it with scripts or batch files
int main() {
	std::cout << "Welcome to C++!\n"; // printing a text on the screen
	// sending the text to the standard output stream object
	// << is the stream insertion operator
	// :: is the scope resolution operator
	// cout exists in the standard namespace
	int cout = 10;
	std::cout << "cout: " << cout << "\n";
	return 0; // indicates that the program terminates successfully
} // end main function
