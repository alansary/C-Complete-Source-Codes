/*
 * GradeBook.h
 *
 * Created on: 13 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

#ifndef GRADEBOOK_H_
#define GRADEBOOK_H_

// Fig. 7.16: GradeBook.h
// Definition of class GradeBook that uses an array to store test grades.
// Member functions are defined in GradeBook.cpp

// It is common that the methods of the class don't require any additional
// arguments to operate and perform its task, all the arguments required
// must be passed to the constructor and initialized from the constructor

#include <string> // program uses C++ Standard Library string class
using std::string;

// GradeBook class definition
class GradeBook {
public:
	// constant -- number of students who took the test
	// there is exactly one copy of the variable students and so we declare it
	// as a static member that is initialized only once
	// this is because no matter how many objects of this class would be instantiated
	// , this constant will retain its value
	const static int students = 10; // note public data

	// constructor initializes course name and array of grades
	GradeBook(string, const int []);

	void setCourseName(string); // function to set the course name
	string getCourseName(); // function to retrieve the course name
	void displayMessage(); // display a welcome message
	void processGrades(); // perform various operations on the grade data
	int getMinimum(); // find the minimum grade for the test
	int getMaximum(); // find the maximum grade for the test
	double getAverage(); // determine the average grade for the test
	void outputBarChart(); // output bar chart of grade distribution
	void outputGrades(); // output the contents of the grades array
private:
	string courseName; // course name for this grade book
	// this class is hard coded to process only ten grades
	int grades[students]; // array of student grades
}; // end class GradeBook

#endif /* GRADEBOOK_H_ */
