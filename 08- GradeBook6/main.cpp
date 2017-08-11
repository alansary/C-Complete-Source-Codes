/*
 * main.cpp
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 3.17: fig03_16.cpp
// Create and manipulate a GradeBook object; illustate validation.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // include definition of class GradeBook

// function main begins program execution
int main() {
	// create two GradeBook objects;
	// initial course name of gradeBook1 is too long
	GradeBook gradeBook1( "CS101 Introduction to Programming in C++" );
	GradeBook gradeBook2( "CS102 C++ Data Structures" );

	// display each GradeBooks's courseName
	cout << "gradeBook1's initial course name is: "
		<< gradeBook1.getCourseName()
		<< "\ngradeBook2's initial course name is: "
		<< gradeBook2.getCourseName() << endl;

	// modify myGradeBook's courseName (with a valid-length string)
	gradeBook1.setCourseName( "CS101 C++ Programming" );

	// display each GradeBooks's courseName
	cout << "\ngradeBook1's course name is: "
		<< gradeBook1.getCourseName()
		<< "\ngradeBook2's course name is: "
		<< gradeBook2.getCourseName() << endl;
	return 0; // indicate successful termination
} // end main
