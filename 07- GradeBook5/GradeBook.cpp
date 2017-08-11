/*
 * GradeBook.cpp
 *
 * Created on: 11 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 3.12: GradeBook.cpp
// GradeBook member-function definition. This file contains
// implementations of the member function prototyped in GradeBook.h
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // include definition of class GradeBook

// defining our member functions

// constructor initializes courseName with string supplied as argument
// the scope resolution operator says that that member function
// , GradeBook is within the scope of the class GradeBook
GradeBook::GradeBook( string name) {
	// we are calling setCourseName function which exists in the definition
	// of the GradeBook class, for the constructor GradeBook to know that
	// the function setCourseName exists in the definition of the class
	// we must use the scope resolution operator
	setCourseName( name ); // call set function to initialize courseName
} // end GradeBook constructor

// function to set the course name
// setCourseName is within the scope of the class GradeBook
void GradeBook::setCourseName( string name ) {
	// if the setCourseName function is not considered to be a part
	// of the class GradeBook, it will not know which courseName variable
	// we are talking about
	courseName = name; // store the course name in the object
} // end function setCourseName

//function to get the course name
string GradeBook::getCourseName() {
	return courseName; // return object's courseName
} // end function getCourseName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() {
	// call getCourseName to get the courseName
	cout << "Welcome to the grade book for\n" << getCourseName()
		<< "!" << endl;
} // end function displayMessage
