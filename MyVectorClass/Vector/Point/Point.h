// Point.h
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

class Point
{
	public:
		Point();     // constructor
		Point(float x, float y, float z);     // constructor
		Point(const Point& copyFrom); //copy constructor
		Point operator=(const Point copy_from); //copy assignment
		~Point();                  // destructor

		float x;
		float y;
		float z;

		void PrintPoint(char* prefixWith) const;

	private:
};