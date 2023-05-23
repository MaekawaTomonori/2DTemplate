#pragma once
#include <Novice.h>
#include "Transform.h"

enum ObjectType
{
	ENTITY,
	ITEM,
	BLOCK
};

class GameObject
{
private:
	//UUID uuid;
public:
	void update();
	void draw();

protected:
	//void generateUniqueId(UUID *uuid);
	ObjectType objType;
	Transform transform;
	int texture;
	//void *initalize(ObjectType type, Transform transform);
	//void setObjType(ObjectType type);
	//void setTransform(Transform trnsfrm);
};