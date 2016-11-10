// Vector.cpp : Defines the entry point for the console application.
// Author: Trevor Newell
// 9/1/2016
#include "Vector.h"

using namespace std;

Vector::Vector() // Constructor
{
	x = 0;
	y = 0;
	z = 0;
}

Vector::Vector(float xVal, float yVal, float zVal)
{
	x = xVal;
	y = yVal;
	z = zVal;
}

Vector::~Vector() // Destructor
{

}

// Constructs a new vector from an already existing Vector.
Vector::Vector(const Vector& oldVector) 
{
	x = oldVector.x;
	y = oldVector.y;
	z = oldVector.z;
}

// Operator override for =.  Copies contents of one vector, to another.
Vector Vector::operator=(const Vector oldVector) 
{
	Vector newVector = Vector();

	newVector.x = oldVector.x;
	newVector.y = oldVector.y;
	newVector.z = oldVector.z;

	return newVector;
}

// Addition
Vector Vector::operator+(const Vector addTo)
{
	Vector result = Vector();

	result.x = x + addTo.x;
	result.y = y + addTo.y;
	result.z = z + addTo.z;

	return result;
}

// Subtraction
Vector Vector::operator-(const Vector subFrom)
{
	Vector result = Vector();

	result.x = x - subFrom.x;
	result.y = y - subFrom.y;
	result.z = z - subFrom.z;

	return result;
}

// Negate
void Vector::Negate()
{
	x = x * -1;
	y = y * -1;
	z = z * -1;
}

// Scalar Multiplication
Vector Vector::operator*(const float scaleBy)
{
	Vector m = Vector(*this);
	m.x = m.x * scaleBy;
	m.y = m.y * scaleBy;
	m.z = m.z * scaleBy;

	return m;
}

Vector Vector::CrossProduct(const Vector rightSide)
{
	float newX = y*rightSide.z - z*rightSide.y;
	float newY = -1 * (x*rightSide.z - z*rightSide.x);
	float newZ = x*rightSide.y - y*rightSide.x;
	return Vector(newX, newY, newZ);
}

// Dot Product
float Vector::DotProduct(const Vector rightSide)
{
	Vector m = Vector(*this);
	return x*rightSide.x + y*rightSide.y + z*rightSide.z;
}

// Length
float Vector::Length()
{
	Vector m = Vector(*this);
	return sqrt(pow(m.x, 2) + pow(m.y, 2) + pow(m.z, 2));
}

void Vector::PrintVector(char* prefixWith) const
{
	cout << prefixWith << " X: " << x << " Y: " << y << " Z: " << z << "\n";
}

int main()
{
	// Test Default Constructor
	Vector v = Vector();
	v.PrintVector("Initial for v: ");

	v.x = 5;
	v.y = 15;
	v.z = 12;

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

//	// Test Subtraction
//	c.PrintVector("C: ");
//	e.PrintVector("E: ");
//	Vector s = c - e;
//	s.PrintVector("Test Sub (s = c - e): ");
//	cout << "\n";
//
//	// Test Negate
//	a.PrintVector("A: ");
//	a.Negate();
//	a.PrintVector("Test Negate (a.Negate()): ");
//	cout << "\n";
//
//	// Test Scalar Multiplication
//	v.PrintVector("V: ");
//	Vector m = v * 3;
//	m.PrintVector("Test Scalar Mult (m = v*3): ");
//	cout << "\n";
//
//	// Test Cross Product
//	Vector left = Vector(1, 2, 3);
//	Vector right = Vector(4, 5, 6);
//	left.PrintVector("Left: ");
//	right.PrintVector("Right: ");
//	Vector cross = left.CrossProduct(right);
//	cross.PrintVector("Test Cross Product (left x right): ");
//	cout << "\n";
//
//	// Test Dot Product
//	a.PrintVector("A: ");
//	c.PrintVector("C: ");
//	float d = a.DotProduct(c);
//	cout << "Test Dot Product (a.DotProduct(c)): " << d << "\n";
//	cout << "\n";
//
//	// Test Length 
//	a.PrintVector("A: ");
//	float l = a.Length();
//	cout << "Test Length (a.Length()): " << l << "\n";
//	cout << "\n";
//
//	cin.ignore(); // Hold console window open to view results
//	return 0; // Close program
//}