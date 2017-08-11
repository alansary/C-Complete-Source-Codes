/*
 * GradeBook.h
 *
 * Created on: 11 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

#ifndef GRADEBOOK_H_
#define GRADEBOOK_H_

// Fig. 3.11: GradeBook.h
// GradeBook class definition. This file presents GradeBook's public
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp
#include <string> // class GradeBook usees C++ standard string class
using std::string;

// GradeBook class definition
// function prototypes specifies the name of the function,
// the return type and the types of the parameters
// the definitions are included in the implementation not
// the interface
class GradeBook {
	// this allow you to hide your source code from the clients
	// and provide them with only the header file along with a
	// compiled version of the source file for that class
	// the clients can see the interface of the class, but
	// they cannot see how the class is implemented
	// the private section is presented here, it is an implementation
	// detail, however, it has to be presented in the interface for the
	// compiler to know how much memory to reserve for any instance of that class
	// Note that: only the private section of the class is reserved as a part
	// of an instance of the class, but the methods are not part of the instance
	// of the class and so they are not allocated with the instantiation
	// the methods of the class are shared between the different objects
public:
	GradeBook( string ); // constructor that initializes courseName
	void setCourseName( string ); // function that sets the course name
	string getCourseName(); // function that gets the coure name
	void displayMessage(); // function that displays a welcome message
public:
	string courseName; // course name for this GradeBook
}; // end class GradeBook

#endif /* GRADEBOOK_H_ */
