/*
 * main.cpp
 *
 * Created on: 13 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 7.12: fig07_12.cpp
// Treating character arrays as strings
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::getline;
using std::string;

int main() {
	char string1[20]; // reserves 20 characters
	char string2[] = "string literal"; // reserves 15 characters
	// including the null character escape sequence "\0"

	// read string from user into array string1
	cout << "Enter the string \"hello there\": ";
	cin >> string1; // reads "hello" [space terminates input]
	// encounters a token
	// cin.get() gets each character all alone and doesn't escape '\n', '\t', ...

	// output strings
	cout << "string1 is: " << string1 << "\nstring2 is: " << string2;

	cout << "\nstring1 with spaces between characters is:\n";

	// output characters until null character is reached
	for (int i = 0; string1[i] != '\0'; i++)
		cout << string1[i] << ' ';

	// continue reading from the standard input stream buffer
	cin >> string1; // reads "there"
	cout << "\nstring1 is: " << string1 << endl;

	// using getline to input an entire line
	string string3;
	cout << "Enter the string \"hello, world!\": ";
	getline(cin, string3); // gets the "\n" from the standard input stream buffer
	getline(cin, string3);
	cout << "\nstring3 is: " << string3 << endl;

	// in C character arrays there is no boundary checking
	// string4 is not long enough to store the string, however, it will store it
	// ; that is, it will access memory that is not allocated for it, this can
	// override other variables in my program (buffer overrun/overflow).
	// the string class prevents such error from happening.
	char string4[10];
	cout << "Enter the string \"MohamedAmrAlansary\": ";
	cin >> string4;
	cout << "\nstring4 is: " << string4 << endl;
	return 0; // indicates successful termination
} // end main
