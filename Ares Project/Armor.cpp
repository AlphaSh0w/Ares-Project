#include "Armor.h"

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
