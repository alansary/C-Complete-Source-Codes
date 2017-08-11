/*
 * main.cpp
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 4.8: fig04_08.cpp
// Create GradeBook object and invoke its determineClassAverage function.
#include "GradeBook.h" // indicate definition of class GradeBook

int main() {
	// create GradeBook object myGradeBook and
	// pass course name to constructor
	GradeBook myGradeBook( "CS101 C++ Programming" );

	myGradeBook.displayMessage(); // display welcome message
	myGradeBook.determineClassAverage(); // find average of 10 grades
	return 0; // indicate successful termination
} // end main
