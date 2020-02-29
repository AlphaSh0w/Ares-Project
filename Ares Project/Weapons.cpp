#include "Weapons.h"

using namespace WeaponTypes;

Stats Weapon::GetStats() const
{
	return stats;
}

Weffect Weapon::GetEffect() const
{
	return effect;
}

std::string Weapon::GetName() const
{
	return name;
}

Weapon::Weapon(int attack,int hp, int sp, int def, int initiative,std::string name, Weffect effect)
	:
	stats(attack,hp,sp,def,initiative),
	name(name),
	effect(effect)
{
}

Sword::Sword()
	:
	Weapon(20,0,0,0,0,"sword",Weffect::None)
{
}

Fists::Fists()
	:
	Weapon(0,0,0,0,0, "fists", Weffect::None)
{
}

WeaponTypes::VoidSword::VoidSword()
	:
	Weapon(10,0,0,0,0,"void sword",Weffect::ArmorBypass)
{
}

WeaponTypes::LeechSword::LeechSword()
	:
	Weapon(15,0,0,0,0,"leech sword",Weffect::LifeSteal)
{
}
