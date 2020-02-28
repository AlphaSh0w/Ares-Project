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
	Stats GetStats();
	std::string GetName();
private:
	std::string name;
	Aeffect effect;
protected:
	Armor(int attack, int hp, int sp, int def, int initiative, std::string name, Aeffect effect);
protected:
	Stats stats;
};

namespace ArmorTypes
{
	class NoArmor : public Armor
	{
	public:
		NoArmor();
	};

	class BasicArmor : public Armor
	{
	public:
		BasicArmor();
	};
}