/*
 * GradeBook.h
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

#ifndef GRADEBOOK_H_
#define GRADEBOOK_H_

// Fig. 3.15: GradeBook.h
// GradeBook class definition presents the public interface of
// the class. Member-function definitions appear in GradeBook.cpp
#include <string> // program uses C++ standard string class
using std::string;

// GradeBook class definition
class GradeBook {
public:
	GradeBook( string ); // constructor that initializes a GradeBook object
	void setCourseName( string ); // function that sets the course name
	string getCourseName(); // function that gets the course name
	void displayMessage(); // function that displays a welcome message
private:
	string courseName; // course name for this GradeBook
}; // end class GradeBook

#endif /* GRADEBOOK_H_ */
