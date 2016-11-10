// Ray.h
// Author: Trevor Newell
// 9/1/2016

#pragma once

#include"Point.h"
#include"Vector.h"
class Ray
{
public:
	Ray();     // constructor
	Ray(Point p, Vector v);     // constructor
	Ray(Point p, Point p2);     // constructor
	Ray(const Ray& copy_from); //copy constructor
	Ray operator=(const Ray copy_from); //copy assignment
	~Ray();                  // destructor

	Point point;
	Vector vector;

	void PrintRay(char* prefixWith) const;

	// Addition
	Ray operator+(const Ray addTo);

	// Subtraction
	Ray operator-(const Ray subFrom);

	// Negate
	void Negate();

	// Scalar Multiplication
	Ray operator*(const float scaleBy);

	// Dot Product
	float DotProduct(const Ray rightSide);

	// Length - Magnitude
	float Length();

private:
};