// Vector.cpp : Defines the entry point for the console application.
// Author: Trevor Newell
// 9/1/2016

#include "stdafx.h"
#include "Vector.h"
#include <iostream>
#include <ostream>

using namespace std;

Vector::Vector() // Constructor
{
	xValue = 0;
	yValue = 0;
	zValue = 0;
}

Vector::~Vector() // Destructor
{

}

// Constructs a new vector from an already existing Vector.
Vector::Vector(const Vector& oldVector) 
{
	xValue = oldVector.xValue;
	yValue = oldVector.yValue;
	zValue = oldVector.zValue;
}

// Operator override for =.  Copies contents of one vector, to another.
Vector Vector::operator=(const Vector oldVector) 
{
	Vector newVector = Vector();

	newVector.xValue = oldVector.xValue;
	newVector.yValue = oldVector.yValue;
	newVector.zValue = oldVector.zValue;

	return newVector;
}

// Addition
Vector Vector::operator+(const Vector addTo)
{
	Vector result = Vector();

	result.xValue = xValue + addTo.xValue;
	result.yValue = yValue + addTo.yValue;
	result.zValue = zValue + addTo.zValue;

	return result;
}

// Subtraction
Vector Vector::operator-(const Vector subFrom)
{
	Vector result = Vector();

	result.xValue = xValue - subFrom.xValue;
	result.yValue = yValue - subFrom.yValue;
	result.zValue = zValue - subFrom.zValue;

	return result;
}

// Negate
void Vector::Negate()
{
	xValue = xValue * -1;
	yValue = yValue * -1;
	zValue = zValue * -1;
}

// Scalar Multiplication
Vector Vector::operator*(const double scaleBy)
{
	Vector m = Vector(*this);
	m.xValue = m.xValue * scaleBy;
	m.yValue = m.yValue * scaleBy;
	m.zValue = m.zValue * scaleBy;

	return m;
}

// Dot Product
double Vector::DotProduct(const Vector rightSide)
{
	Vector m = Vector(*this);
	return m.xValue*rightSide.xValue + m.yValue*rightSide.yValue + m.zValue*rightSide.zValue;
}

// Length
double Vector::Length()
{
	Vector m = Vector(*this);
	return sqrt(pow(m.xValue, 2) + pow(m.yValue, 2) + pow(m.zValue, 2));
}

void Vector::PrintVector(char* prefixWith) const
{
	cout << prefixWith << " X: " << xValue << " Y: " << yValue << " Z: " << zValue << "\n";
}

int main()
{
	// Test Default Constructor
	Vector v = Vector();
	v.PrintVector("Initial for v: ");

	v.xValue = 5;
	v.yValue = 15;
	v.zValue = 12;

	v.PrintVector("New Values for v: ");

	// Test Equals
	Vector e = v;
	e.PrintVector("Test Equals (e = v): ");
	cout << "\n";

	// Test Copy
	e.PrintVector("E: ");
	Vector c = Vector(e);
	c.PrintVector("Test Copy (c = Vector(e);): ");
	cout << "\n";

	// Test Addition
	c.PrintVector("C: ");
	e.PrintVector("E: ");
	Vector a = c + e;
	a.PrintVector("Test Add (a = c + e): ");
	cout << "\n";

	// Test Subtraction
	c.PrintVector("C: ");
	e.PrintVector("E: ");
	Vector s = c - e;
	s.PrintVector("Test Sub (s = c - e): ");
	cout << "\n";

	// Test Negate
	a.PrintVector("A: ");
	a.Negate();
	a.PrintVector("Test Negate (a.Negate()): ");
	cout << "\n";

	// Test Scalar Multiplication
	v.PrintVector("V: ");
	Vector m = v * 3;
	m.PrintVector("Test Scalar Mult (m = v*3): ");
	cout << "\n";

	// Test Dot Product
	a.PrintVector("A: ");
	c.PrintVector("C: ");
	double d = a.DotProduct(c);
	cout << "Test Dot Product (a.DotProduct(c)): " << d << "\n";
	cout << "\n";

	// Test Length 
	a.PrintVector("A: ");
	double l = a.Length();
	cout << "Test Length (a.Length()): " << l << "\n";
	cout << "\n";

	cin.ignore(); // Hold console window open to view results
	return 0; // Close program
}