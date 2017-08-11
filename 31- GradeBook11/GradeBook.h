/*
 * GradeBook.h
 *
 * Created on: 13 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

#ifndef GRADEBOOK_H_
#define GRADEBOOK_H_

// Fig. 7.23: GradeBook.h
// Definition of class GradeBook that uses a
// two-dimensional array to store test grades.
// Member functions are defined in GradeBook.cpp
#include <string> // program uses C++ Standard Library string class
using std::string;

// GradeBook class definition
class GradeBook {
public:
	// constants
	const static int students = 10; // number of students
	const static int tests = 3; // number of tests

	// constructor initializes course name and array of grades
	GradeBook(string, const int [][tests]);

	void setCourseName(string); // function to set the course name
	string getCourseName(); // function to retrieve the course name
	void displayMessage(); // display a welcome message
	void processGrades(); // perform various operations on the grade data
	int getMinimum(); // find the minimum grade in the grade book
	int getMaximum(); // find the maximum grade in the grade book
	double getAverage(const int [], const int); // get student's average
	void outputBarChart(); // output bar chart of grade distribution
	void outputGrades(); // output the contents of the grades array
private:
	string courseName; // course name for this grade book
	int grades[students][tests]; // two-dimensional array of grades
}; // end class GradeBook

#endif /* GRADEBOOK_H_ */
