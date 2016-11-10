#include "Ray.h"

using namespace std;

Ray::Ray()
{
	point = Point();
	vector = Vector();
}

Ray::Ray(const Point& p, const Vector& v)
{
	point = p;
	vector = v;
}

Ray::Ray(const Point& p, const Point& p2)
{
	point = p;
	vector = Vector(p2.x - p.x, p2.y - p.y, p2.z - p.z); // This calculates the actual length of our vector.  Based on the distance between the two points.
}

Ray::Ray(const Ray& copyFrom)
{
	point = copyFrom.point;
	vector = copyFrom.vector;
}

Ray Ray::operator=(const Ray copyFrom)
{
	return copyFrom;
}

Ray::~Ray()
{
}

void Ray::PrintRay(char * prefixWith) const
{
	cout << prefixWith << "Point (X: " << point.x << " Y: " << point.y << " Z: " << point.z << "). " << "\n" << 
			prefixWith << "Vector(X: " << vector.x << " Y : " << vector.y << " Z : " << vector.z << "). " << "\n";
}

int main()
{
	// Test Default Constructor
	Ray v = Ray();
	v.PrintRay("Initial for v: ");

	v.point = Point(1, 2, 3);
	v.vector = Vector(5, 4, 3);

	v.PrintRay("New Values for v: ");
	cout << "\n";

	// Test Equals
	Ray e = v;
	e.PrintRay("Test Equals (e = v): ");
	cout << "\n";

	// Test Copy
	e.PrintRay("E: ");
	Ray c = Ray(e);
	c.PrintRay("Test Copy (c = Ray(e);): ");
	cout << "\n";

	// Test point vector constructor
	v = Ray(Point(1,1,1), Vector(3,5,6));
	v.PrintRay("Test point vector constructor: ");
	cout << "\n";

	// Test point vector constructor
	v = Ray(Point(1, 1, 1), Point(2, 2, 2));
	v.PrintRay("Test point point constructor: ");
	cout << "\n";

	cin.ignore(); // Hold console window open to view results
	return 0; // Close program
}
