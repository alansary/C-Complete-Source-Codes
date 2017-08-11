/*
 * main.cpp
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 6.11: fig06_11.cpp
// A scoping example.
#include <iostream>
using std::cout;
using std::endl;

void useLocal(); // function prototype
void useStaticLocal(); // function prototype
void useGlobal(); // function prototype

int x = 1; // global variable

int main() {
	cout << "global x in main is " << x << endl;
	// the only x that exists right now is the global x
	int x = 5; // local variable to main
	// defining a local variable x hides the global variable for
	// the rest of that scope
	cout << "local x in main's outer scope is " << x << endl;
	{ // start a new scope
		int x = 7; // hides both x in outer scope and global x
		cout << "local x in main's inner scope is " << x << endl;
	} // end new scope
	cout << "local x in main's outer scope is " << x << endl;

	useLocal(); // useLocal has local x
	useStaticLocal(); // useStaticLocal has static local x
	useGlobal(); // useGlobal uses global x
	useLocal(); // useLocal reinitializes its local x
	useStaticLocal(); // static local x retains its prior value
	useGlobal(); // global x also retains its prior value

	cout << "\nlocal x in main is " << x << endl;
	return 0; // indicate successful termination
} // end main

// useLocal reinitializes local variable x during each call
void useLocal() {
	int x = 25; // initialized each time useLocal is called
	cout << "\nlocal x is " << x << " on entering useLocal" << endl;
	x++;
	cout << "local x is " << x << " on exiting useLocal" << endl;
	// once the function returns to its caller, any local variable
	// that have been declared goes away
} // end function useLocal

// useStaticLocal initializes static local variable x only the
// first time the function is called; value of x is saved
// between calls to this function
void useStaticLocal() {
	// the first time the function gets called, the static local variable
	// will be created and initialized and this variable then exist from
	// that time of the program until the program terminates
	// its life time is from the moment its declaration is first encountered
	// until the program terminates but its scope still inside the curly
	// braces in which it is declared
	static int x = 50; // initialized first time useStaticLocal is called
	cout << "\nlocal static x is " << x << " on entering useStaticLocal" << endl;
	x++;
	cout << "local static x is " << x << " on exiting useStaticLocal" << endl;
} // end function useStaticLocal

// useGlobal modifies global variable x during each call
void useGlobal() {
	cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
	x *= 10;
	cout << "global x is " << x << " on exiting useGlobal" << endl;
} // end function useGlobal
