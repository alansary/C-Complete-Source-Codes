/*
 * main.cpp
 * Created on: 11 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 3.3: fig03_03.cpp
// Define class GradeBook with a member function that takes a parameter;
// Create a GradeBook object and call its displayMessage function.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> // program uses C++ standard string class
using std::string;
using std::getline;
// getline reads a line of input and stores it in a string
// cin reads only one token at a time
// standard library class all start by lowercase letters

// GradeBook class definition
class GradeBook {
public:
	// function that displays a welcome message to the GradeBook user
	void displayMessage( string courseName ) {
		cout << "Welcome to the grade book for\n" << courseName << "!"
			<< endl;
	} // end function displayMessage
}; // end class GradeBook

// function main begins program execution
int main() {
	// string is a class which is part of the standard library
	// string is not a built-in data type
	string nameOfCourse; // string of characters to store the course name
	GradeBook myGradeBook; // create a GradeBook object named myGradeBook

	// prompt for and input course name
	cout << "Please enter the course name:" << endl;
	// first argument is the input stream and second argument is the destination
	getline( cin, nameOfCourse ); // read a course name with blanks
	cout << endl; // output a blank line

	// call myGradeBook's displayMessage function
	// and pass nameOfCourse as an argument
	myGradeBook.displayMessage( nameOfCourse );
	return 0; // indicate successful termination
} // end main
