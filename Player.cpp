#include "Player.h"

void Player::initalize()
{
	status = PlayerStatus();
	transform.set(640, 640);
	texture = Novice::LoadTexture("./Resources/Player/player.png");
}

Player::Player()
	:Entity()
{
	initalize();
}
