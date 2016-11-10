// Vector.h
// Author: Trevor Newell
// 9/1/2016

#pragma once

class Vector           
{
public:                   
	Vector();     // constructor
	Vector(const Vector& copy_from); //copy constructor
	Vector operator=(const Vector copy_from); //copy assignment
	~Vector();                  // destructor

	double xValue;
	double yValue;
	double zValue;

	void PrintVector(char* prefixWith) const;

	// Addition
	Vector operator+(const Vector addTo);

	// Subtraction
	Vector operator-(const Vector subFrom);

	// Negate
	void Negate();

	// Scalar Multiplication
	Vector operator*(const double scaleBy);

	// Dot Product
    double DotProduct(const Vector rightSide);

	// Length - Magnitude
	double Length();

private:    
};
