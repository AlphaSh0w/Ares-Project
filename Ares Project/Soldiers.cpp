#include "Soldiers.h"
#include <assert.h>
#include <algorithm>
Soldier::Soldier(int attack, int hp, int sp, int def, int initiative)
	:
	stats(attack,hp,sp,def,initiative)
{
}

int Soldier::Attack(Soldier & other)
{
	assert(weapon != nullptr); //If assertion fails, the soldier is attacking without having a weapon (not even fists).
	return other.ReceiveDamage(stats.attack + weapon->GetStats().attack + dice.SumRoll());
}

int Soldier::ReceiveDamage(int damage)
{
	assert(armor != nullptr); //If assertion fails, the soldier being attacked does not have armor (not even basic armor).
	return ReceiveRawDamage(std::max(0,damage - stats.def - armor->GetStats().def));
}

int Soldier::ReceiveRawDamage(int damage)
{
	stats.hp -= damage;
	return damage;
}

bool Soldier::IsAlive()
{
	return stats.hp > 0;
}

Weapon* Soldier::GiveWeapon(Weapon * in_weapon)
{
	Weapon* temp = weapon;
	weapon = in_weapon;
	return temp;
}

Armor * Soldier::GiveArmor(Armor * in_armor)
{
	Armor* temp = armor;
	armor = in_armor;
	return temp;
}

Peasant::Peasant()
	:
	Soldier(20,300,0,5,10)
{
}
