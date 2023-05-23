#pragma once
class PlayerStatus
{
private:
	int hp,
		xp,
		strength,
		level,
		agility;
public:
	PlayerStatus() :hp(10), xp(0), strength(1), level(0), agility(1){}
	int getHp() const{
		return hp;
	}
	int getXp() const{
		return xp;
	}
	int getStrength() const{
		return strength;
	}
	int getLevel() const{
		return level;
	}
	int getAgility() const{
		return agility;
	}
};

