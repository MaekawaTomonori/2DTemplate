#include "Transform.h"

Transform::Transform()
	:location(Location()),
	vector(Vector()),
	scale(1),
	imgDotSize(64)
{}

Transform::Transform(Location loc, Vector vec, float scale, int dot)
	:location(loc),
	vector(vec),
	scale(scale),
	imgDotSize(dot)
{
}

Location Transform::add(Vector newVector)
{
	return Location(newVector.getX() * vector.getVelocity(), newVector.getY() * vector.getVelocity());
}

void Transform::set(float x, float y)
{
	location = Location(x, y);
}
