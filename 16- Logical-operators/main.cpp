/*
 * main.cpp
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

// Fig. 5.18: fig05_18.cpp
// logical operators.
#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha; // causes bool values to print as "true" or "false"
// boolalpha is a sticky stream manipulator
int main() {
	// AND and OR logical operators in C/C++ perform short-circute evaluation
	// that means that in case of terms anded togethe, if a term evaluates
	// to false, then it will not check the remaining terms and it will evaluate the
	// whole expression to be false
	// also in case of terms that are ored together, if a term evaluates to true,
	// then it will not continue to check the remaining terms and it will evaluate
	// the whole expression to be true
	// The order of evaluation is from left to right

	// It is important to know that both logical AND and logical OR perform
	// short-circuit evaluation because if you provide expressions on the left and
	// right side that cause side effects, it is possible that they won't get
	// executed. A side effect is for example, a function call that modifies a
	// variable's value or an expression that modifies a variable's value,
	// for example using ++ or -- operators to add or subtract a one from a variable,
	// or even an expression that will modify the location of a variable in memory.
	// If such an expression is on the right side of a logical AND or logical OR
	// operator, it is possible that it will never get executed because of the
	// short-circuit evaluation process. You can overcome this problem by
	// storing the value of the variable in a temporary variable an use the
	// temporary variable to gurantee whether or not the value has been changed.
	// Also there are some cases where the order does matter, for example, we must
	// check if (x != 0) before checking a condition such as (y/x >= 100).

	// create truth table for && (logical AND) operator
	cout << boolalpha << "Logical AND (&&)"
		<< "\nfalse && false: " << (false && false)
		<< "\nfalse && true: " << (false && true)
		<< "\ntrue && false: " << (true && false)
		<< "\ntrue && true: " << (true && true) << "\n\n";

	// create truth table for || (logical OR) operator
	cout << "Logical OR (||)"
		<< "\nfalse || false: " << (false || false)
		<< "\nfalse || true: " << (false || true)
		<< "\ntrue || false: " << (true || false)
		<< "\ntrue || true: " << (true || true) << "\n\n";

	// create truth table for ! (logical negation) operator
	cout << "Logical NOT (!)"
		<< "\n!false: " << (!false)
		<< "\n!true: " << (!true) << endl;

	return 0; // indicate successful termination
} // end main
