/*
 * GradeBook.h
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

#ifndef GRADEBOOK_H_
#define GRADEBOOK_H_

// Fig. 4.6: GradeBook.h
// Definition of class GradeBook that determines a class average.
// Member function are defined in GradeBook.cpp
#include <string> // program uses C++ standard string class
using std::string;

// GradeBook class definition
class GradeBook {
public:
	GradeBook( string ); // constructor initializes course name
	void setCourseName( string ); // function to set the course name
	string getCourseName(); // function to retrieve the course name
	void displayMessage(); // display a welcome message
	void determineClassAverage(); // averages grades entered by the user
private:
	string courseName; // course name for this GradeBook
}; // end class GradeBook

#endif /* GRADEBOOK_H_ */
