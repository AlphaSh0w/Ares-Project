#include "Armor.h"

using namespace ArmorTypes;

Stats Armor::GetStats()
{
	return stats;
}

std::string Armor::GetName()
{
	return name;
}

Armor::Armor(int attack, int hp, int sp, int def, int initiative, std::string name, Aeffect effect)
	:
	stats(attack,hp,sp,def,initiative),
	name(name),
	effect(effect)
{
}

BasicArmor::BasicArmor()
	:
	Armor(0, 0, 0, 5, 0, "basic armor", Aeffect::none)
{
}

ArmorTypes::NoArmor::NoArmor()
	:
	Armor(0, 0, 0, 0, 0, "noarmor",Aeffect::none)
{
}
