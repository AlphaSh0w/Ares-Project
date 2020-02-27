#include "Weapons.h"

using namespace WeaponTypes;

Stats Weapon::GetStats()
{
	return stats;
}

Weffect Weapon::GetEffect()
{
	return effect;
}

Weapon::Weapon(int attack,int hp, int sp, int def, int initiative,std::string name, Weffect effect)
	:
	stats(attack,hp,sp,def,initiative),
	name(name),
	effect(effect)
{
}

Sword::Sword(int attack)
	:
	Weapon(attack,0,0,0,0,"sword",Weffect::None)
{
}

Fists::Fists()
	:
	Weapon(0,0,0,0,0, "fists", Weffect::None)
{
}
