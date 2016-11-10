// Point.h
// Author: Trevor Newell
// 11/6/2016

#pragma once

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