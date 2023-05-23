#include "Vector.h"

Vector::Vector(){
	x = 0;
	y = 0;
	direction = FRONT;
	velocity = 0;
}

Vector Vector::normalize()
{
	x /= length();
	y /= length();
	return *this;
}
