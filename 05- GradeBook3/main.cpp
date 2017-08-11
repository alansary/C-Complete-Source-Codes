/*
 * main.cpp
 *
 * Created on: 11 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 3.7: fig03_07.cpp
// Instantiating multiple objects of the GradeBook class and using
// the GradeBook constructors to specify the course name
// when each GradeBook object is created.
#include <iostream>
using std::cout;
using std::endl;

#include <string> // program uses C++ standard string class
using std::string;

// GradeBook class defintion
class GradeBook {
public:
	// constuctor initializes courseName with string supplied as argument
	// automaticall called when you instantiate an object of the class
	// constructors don't have any return types
	// if you don't define a constructor for your class, it will be defined
	// automatically by the compiler which is a default constructor
	// the default constructor doesn't take any arguments
	// if you defined any constructor to your class, then the compiler
	// will not define a default constructor for you
	GradeBook( string name ) {
		setCourseName(name); // call set function to initialize courseName
	} // end GradeBook constructor

	// function to set the course name
	void setCourseName( string name ) {
		courseName = name; // store the course name in the object
	} // end function setCourseName

	// function to get the course name
	string getCourseName() {
		return courseName; // return object's courseName
	} // end function getCourseName

	// display a welcome message to the GradeBook user
	void displayMessage() {
		// call getCourseName to get the courseName
		cout << "Welcome to the grade book for\n" << getCourseName()
			<< "!" << endl;
		// using your setters and getters to deal with the data members
		// makes your class more maintainable, in the future if you decided
		// to change the name of a data member, you don't have to do that
		// in each use of that data member, all you have to do is to change
		// it in the private section, also changing the data type of the data
		// member will be done only in the private section and your code will
		// still work correctly
	} // end function displayMessage
private:
	string courseName; // course name for this GradeBook
}; // end class GradeBook

// function main begins program execution
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
