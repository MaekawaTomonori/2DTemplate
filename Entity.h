#pragma once
#include "GameObject.h"

class Entity : public GameObject
{
private:
	bool alive;
protected:
	Entity();
	bool isAlive() {
		return alive;
	}
	void setAlive(bool nowAlive) {
		this->alive = nowAlive;
	}
};