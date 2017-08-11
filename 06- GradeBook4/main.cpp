/*
 * main.cpp
 *
 * Created on: 11 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 3.10: fig03_10.cpp
// Including class GradeBook from file GradeBook.h for use in main.
#include <iostream>
using std::cout;
using std::endl;

// The double quotes tells the preprocessor to first look in this project folder
// for the header file, if it doesn't exist, then it will search the standard
// directories
#include "GradeBook.h" // include definition of class GradeBook
// class definitions typically appear in a header file
// a way to reuse our defined classes is to include them
// in the source code using header files
// Note that: The definition consists of the interface and the implementation

// function main begins program execution
// we can have only one main function in a program
int main() {
	// create two GradeBook objects
	GradeBook gradeBook1( "CS101 Introduction to C++ Programming" );
	GradeBook gradeBook2( "CS102 Data Structures in C++" );

	// display initial value of courseName for each GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;
	return 0; // indicate successful termination
} // end main
