#include "Point.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <ostream>

using namespace std;

Point::Point()
{
	x = 0;
	y = 0;
	z = 0;
}

Point::Point(float xVal, float yVal, float zVal)
{
	x = xVal;
	y = yVal;
	z = zVal;
}

Point::Point(const Point & copyFrom)
{
	x = copyFrom.x;
	y = copyFrom.y;
	z = copyFrom.z;
}

Point Point::operator=(const Point copyFrom)
{
	x = copyFrom.x;
	y = copyFrom.y;
	z = copyFrom.z;

	return Point();
}

Point::~Point()
{

}

void Point::PrintPoint(char * prefixWith) const
{
	cout << prefixWith << " X: " << x << " Y: " << y << " Z: " << z << "\n";
}

int main()
{
	// Test Default Constructor
	Point p = Point();
	p.PrintPoint("Initial for p: ");
	p = Point(2, 5, 3);

	p.PrintPoint("New Values for p: ");

	// Test Equals
	Point e = p;
	e.PrintPoint("Test Equals (e = p): ");
	cout << "\n";

	// Test Copy
	e.PrintPoint("E: ");
	Point c = Point(e);
	c.PrintPoint("Test Copy (c = Point(e);): ");
	cout << "\n";

	cin.ignore(); // Hold console window open to view results
	return 0; // Close program
}
