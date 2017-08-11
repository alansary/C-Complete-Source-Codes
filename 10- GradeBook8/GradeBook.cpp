/*
 * GradeBook.cpp
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig.4 4.10: GradeBook.cpp
// Member-function definitions fro class GradeBook that solves the
// class average program with sentinel-controlled repetition
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed; // ensures that decimal is displayed
// by default if the digits to the right of the decimal point are zero;
// it doesn't display trailing zeros

#include <iomanip> // parameterized stream manipulators
// parameterized means it requires parameters to their task
using std::setprecision; // sets numeric output precision

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name ) {
	setCourseName( name ); // validate and store courseName
} // end GradeBook constructor

// function to set the course name;
// ensures that the course name has at most 25 characters
void GradeBook::setCourseName( string name ) {
	if (name.length() <= 25 ) // if name has 25 or fewer characters
		courseName = name; // store the course name in the object
	else { // if name is longer than 25 characters
		// set courseName to first 25 characters of parameter name
		courseName = name.substr( 0, 25 ); // select first 25 characters
		cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
			<< "Limiting courseName to first 25 characters.\n" << endl;
	} // end if...else
} // end function setCourseName

// function to retrieve the course name
string GradeBook::getCourseName() {
	return courseName;
} // end function getCourseName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() {
	cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
		<< endl;
} // end function displayMessage

// determine class average based on 10 grades entered by user
void GradeBook::determineClassAverage() {
	int total; // sum of grades entered by user
	int gradeCounter; // number of grades entered
	int grade; // grade value
	double average; // number with decimal point for average

	// initialization phase
	total = 0; // initialize total
	gradeCounter = 0; // initialize loop counter
	// gradeCounter represents how many grades has been entered so far

	// processing phase
	// prompt for input and read grade from user
	cout << "Enter grade or -1 to quit: ";
	cin >> grade; // input grade or sentinel value

	// loop until sentinel value read from user
	while ( grade != -1 ) { // while grade is not -1
		total = total + grade; // add grade to total
		gradeCounter = gradeCounter + 1; // increment counter

		// prompt for input and read next grade from user
		cout << "Enter grade or -1 to quit: ";
		cin >> grade; // input grade or sentinel value
	} // end while

	// termination phase
	if ( gradeCounter != 0 ) { // if user entered at lease one grade...
		// calculate average of all grades entered
		average = static_cast< double >( total ) / gradeCounter;
		// the static cast operator, forces the value of the variable total
		// to be treated temporarily as a double value
		// C++ automatically upgrades the lower types to the higher types before
		// evaluating the expression

		// display total and average (with two digits of precision)
		cout << "\nTotal of all " << gradeCounter << " grades entered is "
			<< total << endl;
		cout << "Class average is " << setprecision( 2 ) << fixed << average
			<< endl;
		// setprecision(x) says that from that point forward set the precision to x
		// maximum, so it can be 0, 1, 2, ..., x
		// fixed forces the decimal point to appear
		// when you combine both of them as part of an output statement, all floating
		// point numbers are forced to be displayed with precisely x digits to the
		// right of the decimal point
	} // end if
	else // no grades were entered, so output appropriate message
		cout << "No grades were entered" << endl;
} // end function determineClassAverage
