// Vector.h
// Author: Trevor Newell
// 9/1/2016

#pragma once

#ifndef stdio_h_Included
#define stdio_h_Included
#include <stdio.h>
#endif // !stdio.h_Included

#ifndef tchar_h_Included
#define tchar_h_Included
#include <tchar.h>
#endif // !tchar.h_Included

#ifndef iostream_Included
#define iostream_Included
#include <iostream>
#endif // !iostream_Included

#ifndef ostream_Included
#define ostream_Included
#include <ostream>
#endif // !ostream_Included

class Vector           
{
	public:                   
		Vector();     // constructor
		Vector(float xVal, float yVal, float zVal);     // constructor
		Vector(const Vector& copy_from); //copy constructor
		Vector operator=(const Vector copy_from); //copy assignment
		~Vector();                  // destructor

		float x;
		float y;
		float z;

		void PrintVector(char* prefixWith) const;

		// Addition
		Vector operator+(const Vector addTo);

		// Subtraction
		Vector operator-(const Vector subFrom);

		// Negate
		void Negate();

		// Scalar Multiplication
		Vector operator*(const float scaleBy);

		// Cross Product
		Vector CrossProduct(const Vector rightSide);

		// Dot Product
		float DotProduct(const Vector rightSide);

		// Length - Magnitude
		float Length();

	private:    
};
