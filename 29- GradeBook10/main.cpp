/*
 * main.cpp
 *
 * Created on: 13 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 7.18: fig07_18.cpp
// Create GradeBook object using an array of grades.

#include "GradeBook.h"

// function main begins program execution
int main() {
	// array of student grades
	// within the scope of the GradeBook class is a publically
	// accessible constant called students
	int gradeArray[GradeBook::students] =
		{87, 68, 94, 100, 83, 78, 85, 91, 76, 87};

	GradeBook myGradeBook(
		"CS101 Introduction to C++ Programming", gradeArray);
	myGradeBook.displayMessage();
	myGradeBook.processGrades();
	return 0;
} // end main
