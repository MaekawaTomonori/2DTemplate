#pragma once
#include "Location.h"
#include "Vector.h"

class Transform
{
private:
	Location location;
	Vector vector;
	float scale;
	int imgDotSize;
public:
	Transform();
	Transform(Location loc, Vector vec, float scale, int dot);
	Location getLocation() const{
		return location;
	}
	Vector getVector() {
		return vector;
	}
	float getScale() const {
		return scale;
	}
	int getDotSize() {
		return imgDotSize;
	}
	Location add(Vector newVector);
	void set(float x, float y);

protected:
	void setLocation(Location loc) {
		location = loc;
	}
	void setVector(Vector vec) {
		vector = vec;
	}
	void setScale(float scl) {
		this->scale = scl;
	}
};

