#pragma once
#include <math.h>

enum Direction
{
	FRONT,
	BACK,
	LEFT,
	RIGHT
};
class Vector
{
private:
	float x, y;
	Direction direction;
	int velocity;

	float length() {
		return sqrtf(x * x + y * y);
	}
public:
	Vector();

	float getX() {return x;}
	float getY() {return y;}
	Direction getDirection() {return direction;}
	int getVelocity() { return velocity; }

	Vector normalize();
protected:
	void setDirection(Direction newDirection) {
		direction = newDirection;
	}
	void setVelocity(int velo) {
		velocity = velo;
	}
};