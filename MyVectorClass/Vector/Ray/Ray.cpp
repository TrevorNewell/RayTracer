#include "Ray.h"

Ray::Ray()
{
}

Ray::Ray(Point p, Vector v)
{
}

Ray::Ray(Point p, Point p2)
{
	// May not need
}

Ray::Ray(const Ray & copy_from)
{
}

Ray Ray::operator=(const Ray copy_from)
{
	return Ray();
}

Ray::~Ray()
{
}

void Ray::PrintRay(char * prefixWith) const
{
}

Ray Ray::operator+(const Ray addTo)
{
	return Ray();
}

Ray Ray::operator-(const Ray subFrom)
{
	return Ray();
}

void Ray::Negate()
{
}

Ray Ray::operator*(const float scaleBy)
{
	return Ray();
}

float Ray::DotProduct(const Ray rightSide)
{
	return 0.0f;
}

float Ray::Length()
{
	return 0.0f;
}
