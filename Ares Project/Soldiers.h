#pragma once
#include "Stats.h"
#include "Weapons.h"
#include "Armor.h"

class Soldier
{
public:
	Weapon* GiveWeapon(Weapon* in_weapon); //returns a pointer to the old weapon, else returns nullptr.
	Armor* GiveArmor(Armor* in_armor); //returns a pointer to the old armor, else returns nullptr.
private:
	Weapon* weapon = nullptr;
	Armor* armor = nullptr;
protected:
	Soldier(int attack, int hp, int sp, int def, int initiative);
protected:
	Stats stats;
};

class Peasant : public Soldier
{
public:
	Peasant();

};