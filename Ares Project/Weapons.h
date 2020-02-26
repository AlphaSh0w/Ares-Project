#pragma once
#include <string>
#include "Stats.h"

enum Weffect
{
	None,
	ArmorBypass
};

class Weapon
{
public:
	Weffect GetEffect();
private:
	std::string name;
	Weffect effect;
protected:
	Weapon(int hp, int sp, int def, int initiative,std::string name, Weffect effect);
protected:
	Stats stats;
};

class Sword : public Weapon
{
public:
	Sword(int hp, int sp, int def, int initiative);
private:
};