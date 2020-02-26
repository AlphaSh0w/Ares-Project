#include "Soldiers.h"

Soldier::Soldier(int attack, int hp, int sp, int def, int initiative)
	:
	stats(attack,hp,sp,def,initiative)
{
}

Weapon* Soldier::GiveWeapon(Weapon * in_weapon)
{
	Weapon* temp = weapon;
	weapon = in_weapon;
	return temp;
}

Peasant::Peasant()
	:
	Soldier(20,300,0,5,10)
{
}
