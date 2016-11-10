// Ray.h
// Author: Trevor Newell
// 11/6/2016

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

#ifndef Point_h_Included
#define Point_h_Included
#include"Point.h"
#endif // !Point.h_Included

#ifndef Vector_h_Included
#define Vector_h_Included
#include"Vector.h"
#endif // !Vector.h_Included

class Ray
{
	public:
		Ray();     // constructor
		Ray(const Point& p, const Vector& v);     // This constructor takes a point and a vector.
		Ray(const Point& p, const Point& p2);     // This constructor takes two points and calculates the vector based on the two.
		Ray(const Ray& copyFrom); //copy constructor
		Ray operator=(const Ray& copyFrom); //copy assignment
		~Ray();                  // destructor

		Point point;
		Vector vector;

		void PrintRay(char* prefixWith) const;

	private:
};