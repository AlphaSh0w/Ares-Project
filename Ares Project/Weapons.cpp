#include "Weapons.h"

Weffect Weapon::GetEffect()
{
	return effect;
}

Weapon::Weapon(int hp, int sp, int def, int initiative,std::string name, Weffect effect)
	:
	stats(hp,sp,def,initiative),
	name(name),
	effect(effect)
{
}

Sword::Sword(int hp, int sp, int def, int initiative)
	:
	Weapon(hp,sp,def,initiative,"sword",Weffect::None)
{
}
