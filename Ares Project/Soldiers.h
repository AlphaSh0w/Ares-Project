#pragma once
#include "Stats.h"
#include "Weapons.h"

class Soldier
{
public:
	Weapon* GiveWeapon(Weapon* in_weapon); //returns a pointer to the old weapon, else returns nullptr.
private:
	Weapon* weapon = nullptr;
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