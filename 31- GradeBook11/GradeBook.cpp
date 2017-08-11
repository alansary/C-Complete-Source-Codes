/*
 * GradeBook.cpp
 *
 * Created on: 13 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 7.24: GradeBook.cpp
// Member-function definitions for class GradeBook that
// uses a two-dimensional array to store grades
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip> // parameterized stream manipulators
using std::setprecision; // sets numeric output precision
using std::setw; // sets field width

// include defintion of class GradeBook from GradeBook.h
#include "GradeBook.h"

// two-argument constructor initializes courseName and grades array
GradeBook::GradeBook(string name, const int gradesArray[][tests]) {
	setCourseName(name); // initialize courseName

	// copy grades from gradeArray to grades
	for (int student = 0; student < students; student++)
		for (int test = 0; test < tests; test++)
			grades[student][test] = gradesArray[student][test];
} // end two-argument GradeBook constructor

// function to set the course name
void GradeBook::setCourseName(string name) {
	courseName = name; // store the course name
} // end function setCourseName

// function retrieve the course name
string GradeBook::getCourseName() {
	return courseName;
} // end function getCourseName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() {
	// this statement calls getCourseName to get the
	// name of the course this GradeBook represents
	cout << "Welcome to the grade book for\n" << getCourseName() << "!"
		<< endl;
} // end function displayMessage

// perform various operations on the data
void GradeBook::processGrades() {
	// output grades array
	outputGrades();

	// call functions getMinimum and getMaximum
	cout << "\nLowest grade in the grade book is " << getMinimum()
		<< "\nHighest grade in the grade book is " << getMaximum() << endl;

	// output grade distribution chart of all grades on the tests
	outputBarChart();
} // end function processGrades

// find minimum grade in the entire gradebook
int GradeBook::getMinimum() {
	int lowGrade = 100; // assume lowest grade is 100

	// loop through rows of grades array
	for (int student = 0; student < students; student++) {
		// loop through columns of current row
		for (int test = 0; test < tests; test++) {
			// if current grade less than lowGrade, assign it to lowGrade
			if (grades[student][test] < lowGrade)
				lowGrade = grades[student][test]; // new lowest grade
		} // end inner for
	} // end outer for

	return lowGrade; // return lowest grade
} // end function getMinimum

// find maximum grade in the entire gradebook
int GradeBook::getMaximum() {
	int highGrade = 0; // assume highest grade is 0

	// loop through row of grades array
	for (int student = 0; student < students; student++) {
		// loop through columns of current row
		for (int test = 0; test < tests; test++) {
			// if current grade greater than lowGrade, assign it to highGrade
			if (grades[student][test] > highGrade)
				highGrade = grades[student][test]; // new highest grade
		} // end inner for
	} // end outer for

	return highGrade; // return highest grade
} // end function getMaximum

// determine average grade for particular set of grades
double GradeBook::getAverage(const int setOfGrades[], const int grades) {
	int total = 0; // initialize total

	// sum grades in array
	for (int grade = 0; grade < grades; grade++)
		total += setOfGrades[grade];

	// return average of grades
	return static_cast<double>(total) / grades;
} // end function getAverage


// output the contents of the grades array
void GradeBook::outputGrades() {
	cout << "\nThe grades are:\n\n";
	cout << "            "; // align column heads

	// create a column heading for each of the tests
	for (int test = 0; test < tests; test++)
		cout << "Test " << test + 1 << "  ";

	cout << "Average" << endl; // student average column heading

	// create rows/columns of text representing arragy grades
	for (int student = 0; student < students; student++) {
		cout << "Student " << setw(2) << student + 1;

		// output student's grades
		for (int test = 0; test < tests; test++)
			cout << setw(8) << grades[student][test];

		// call member function getAverage to calculate student's average;
		// pass row of grades and the value of test as the arguments
		// you can treat a row in a two-dimendional array as a one-dimensional
		// array by itself
		double average = getAverage(grades[student], tests);
		cout << setw(9) << setprecision(2) << fixed << average << endl;
	} // end outer for
} // end function outputGrades

// output bar chart displaying grade distribution
void GradeBook::outputBarChart() {
	cout << "\nOverall grade distribution:" << endl;

	// stores frequency of grades in each range of 10 grades
	const int frequencySize = 11;
	int frequency[frequencySize] = {}; // initialize elements to 0

	// for each grade, increment the appropriate frequency
	for (int student = 0; student < students; student++)
		for (int test = 0; test < tests; test++)
			++frequency[grades[student][test] / 10];

	// for each grade frequency, pring bar in chart
	for (int count = 0; count < frequencySize; count++) {
		// output bar label ("0-9:", ..., "90-99:", "100:")
		if (count == 0)
			cout << "  0-99: ";
		else if (count == 10)
			cout << "  100: ";
		else
			cout << count * 10 << "-" << (count * 10) + 9 << ": ";

		// print bar of asterisks
		for (int stars = 0; stars < frequency[count]; stars++)
			cout << '*';

		cout << endl; // start a new line of output
	} // end outer for
} // end function ouputBarChart
