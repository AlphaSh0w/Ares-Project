#include "Soldiers.h"
#include <assert.h>
#include <algorithm>

using namespace SoldierTypes;

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

bool Soldier::IsAlive() const
{
	return stats.hp > 0;
}

Weapon* Soldier::GiveWeapon(Weapon * in_weapon)
{
	assert(in_weapon->GetName() != "fists");//If assertion fails, tried to give fists to a soldier.(Use RemoveWeapon() instead, the soldier will receive fists).
	if (weapon->GetName() != "fists")
	{
		Weapon* temp = weapon;
		weapon = in_weapon;
		return temp;
	}
	else
	{
		weapon = in_weapon;
		return nullptr;
	}

}

Weapon * Soldier::RemoveWeapon()
{
	if (weapon->GetName() != "fists")
	{
		Weapon* temp = weapon;
		weapon = fists;
		return temp;
	}
	else
	{
		return nullptr;
	}
}

Armor * Soldier::GiveArmor(Armor * in_armor)
{
	assert(in_armor->GetName() != "noarmor"); //If assertion fails, tried to give noarmor to a soldier.(use RemoveArmor() instead, the soldier will receive noarmor.)
	if (armor->GetName() != "noarmor")
	{
		Armor* temp = armor;
		armor = in_armor;
		return temp;
	}
	else
	{
		armor = in_armor;
		return nullptr;
	}
}

Armor * Soldier::RemoveArmor()
{
	if (armor->GetName() != "noarmor")
	{
		Armor* temp = armor;
		armor = noarmor;
		return temp;
	}
	else
	{
		return nullptr;
	}
}

Soldier::~Soldier()
{
	if (weapon->GetName() != "fists")
	{
		delete weapon;
	}
	if (armor->GetName() != "noarmor")
	{
		delete armor;
	}
	delete fists;
	delete noarmor;
}

Peasant::Peasant()
	:
	Soldier(20,300,0,5,10)
{
}
