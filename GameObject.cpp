#include "GameObject.h"
//#include <uuids.h>

void GameObject::update()
{
	transform.getVector().normalize();

	transform.add(transform.getVector());
}

void GameObject::draw()
{
	Novice::DrawSprite(int(transform.getLocation().getX() - transform.getDotSize()), int(transform.getLocation().getY() - (transform.getDotSize()*2)), texture, transform.getScale(), transform.getScale(), 0, 0xFFFFFFFF);
}

//void GameObject::generateUniqueId(UUID* uniqueId)
//{
	//UuidCreate(uniqueId);
	//(void)uniqueId;
//}

/*
void *GameObject::initalize(ObjectType type, Transform trnsfrm)
{
	this->objType = type;
	this->transform = trnsfrm;

	return this;
}

void GameObject::setObjType(ObjectType type)
{
	objType = type;
}

void GameObject::setTransform(Transform trnsfrm)
{
	transform = trnsfrm;
}
*/
