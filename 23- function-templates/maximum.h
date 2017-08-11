/*
 * maximum.h
 *
 * Created on: 12 Mar 2017
 * Author: Mohamed Amr Alansary
 * Purpose: 
 */

#ifndef MAXIMUM_H_
#define MAXIMUM_H_

// Fig. 6.25: maximum.h
// Definition of function template maximum.

template < class T > // or template < typename T >
// template < typename T >
// T is some generic type name
T maximum ( T value1, T value2, T value3 ) {
	T maximumValue = value1; // assume value1 is maximum

	// determine whether value2 is greater than maximumValue
	if (value2 > maximumValue)
		maximumValue = value2;

	// determine whether value3 is greater than maximumValue
	if (value3 > maximumValue)
		maximumValue = value3;

	return maximumValue;
} // end function template maximum

#endif /* MAXIMUM_H_ */
