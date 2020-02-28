#pragma once
#include "Stats.h"
#include "Weapons.h"
#include "Armor.h"
#include "Dice.h"

class Soldier
{
public:
	int Attack(Soldier& other);
	int ReceiveDamage(int damage);
	int ReceiveRawDamage(int damage);
	bool IsAlive();
	Weapon* GiveWeapon(Weapon* in_weapon); //returns a pointer to the old weapon, else returns nullptr.
	Weapon* RemoveWeapon(); //returns current weapon, if weapon is fists, returns nullptr.
	Armor* GiveArmor(Armor* in_armor); //returns a pointer to the old armor, else returns nullptr.
	Armor* RemoveArmor();//returns current armor, if armor is noarmor, returns nullptr.
	virtual ~Soldier();
private:
	Dice dice;
	WeaponTypes::Fists *fists = new WeaponTypes::Fists;
	ArmorTypes::NoArmor *noarmor = new ArmorTypes::NoArmor;

	Weapon* weapon = fists;
	Armor* armor = noarmor;
protected:
	Soldier(int attack, int hp, int sp, int def, int initiative);
protected:
	Stats stats;
};
namespace SoldierTypes
{
	class Peasant : public Soldier
	{
	public:
		Peasant();
	};
}
