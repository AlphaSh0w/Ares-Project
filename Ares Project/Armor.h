#pragma once
#include <string>
#include "Stats.h"
enum Aeffect //Different armor effects
{
	none
};

class Armor
{
public:
	
private:
	std::string name;
	Aeffect effect;
protected:
	Armor(int attack, int hp, int sp, int def, int initiative, std::string name, Aeffect effect);
protected:
	Stats stats;
};

class BasicArmor : public Armor
{
public:
	BasicArmor();
};