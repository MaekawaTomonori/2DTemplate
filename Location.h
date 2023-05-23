#pragma once

class Location
{
private:
	float x, y;

public:
	Location();
	Location(float x, float y);

	float getX() const{
		return x;
	}
	float getY() const{
		return y;
	}
protected:
	void setX(float newX) {
		this->x = newX;
	}
	void setY(float newY) {
		this->y = newY;
	}
};