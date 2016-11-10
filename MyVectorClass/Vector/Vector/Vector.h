// Vector.h
// Author: Trevor Newell
// 9/1/2016

#pragma once

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

	// Dot Product
    float DotProduct(const Vector rightSide);

	// Length - Magnitude
	float Length();

private:    
};
