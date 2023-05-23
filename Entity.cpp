#include "Entity.h"

Entity::Entity()
	:GameObject()
{
	objType = ENTITY;
	transform = Transform();
	
	setAlive(true);
}