#pragma once
#include "Entity.h"
#include "PlayerStatus.h"

class Player : public Entity
{
private:
	PlayerStatus status;

	void initalize();
public:
	Player();
	PlayerStatus getStatus() {
		return status;
	}
};