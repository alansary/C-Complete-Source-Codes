/*
 * main.cpp
 *
 * Created on: 11 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 3.5: fig03_05.cpp
// Define class GradeBook that contains a courseName data member
// and member function to set and get its value;
// Create and manipulate a GradeBook object.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> // program uses C++ standard string class
using std::string;
using std::getline;

// GradeBook class definition
class GradeBook {
	// every data member and member function within the class
	// can see and access each other
	// the order of declaration doesn't matter
public:
	// function that sets the course name
	// set member function (setter)
	// by convention, its name starts with set then the name of the
	// data member we are setting
	void setCourseName( string name ) {
		courseName = name; // store the course name in the object
	} // end function setCourseName

	// function that gets the course name
	// get member function (getter)
	// by convention, its name starts with get then the name of the
	// data member that we are getting
	string getCourseName() {
		return courseName; // return the object's courseName
	} // end function getCourseName

	// function that displays a welcome message
	void displayMessage() {
		// this statement calls getCourseName to get the
		// name of the course this GradeBook represents
		cout << "Welcome to the grade book for\n" << getCourseName() << "!"
			<< endl;
	} // end function displayMessage
private:
	// private members are accessed only through the methods within the
	// class, that provides encapsulation and data validity checking
	// using setters and getters allow us to do validation of the data
	// every instance of that class has its one copy of the data members
	string courseName; // course name for this GradeBook
}; // end class GradeBook

// function main begins program execution
int main() {
	string nameOfCourse; // string of characters to store the course name
	GradeBook myGradeBook; // create a GradeBook object named myGradeBook

	// display initial value of courseName
	cout << "Initial course name is: " << myGradeBook.getCourseName()
		<< endl;

	// prompt for, input and set course name
	cout << "\nPlease enter the course name:" << endl;
	getline( cin, nameOfCourse ); // read a course name with blanks
	myGradeBook.setCourseName( nameOfCourse ); // set the course name

	cout << endl; // outputs a blank line
	myGradeBook.displayMessage(); // display message with new course name
	return 0; // indicate successful termination
} //  end main
