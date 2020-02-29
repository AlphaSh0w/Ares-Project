// Ares Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Soldiers.h"
#include "Weapons.h"
#include "Armor.h"
#include "stash.h"

int main()
{
	SoldierTypes::Peasant test;
	WeaponStash w;
	w.Add(new WeaponTypes::Sword());
	w.Add(new WeaponTypes::Sword());
	w.Add(new WeaponTypes::Sword());
	ArmorStash a;
	a.Add(new ArmorTypes::BasicArmor);
	a.Add(new ArmorTypes::BasicArmor);
	a.Add(new ArmorTypes::BasicArmor);
	a.equip(test, 1);
	a.equip(test, 1);
	a.equip(test, 1);
    std::cout << "Hello World!\n";
	w.equip(test, 1);
	w.equip(test, 1);
	w.equip(test, 1);
	test.GiveWeapon(new WeaponTypes::Sword());
	Weapon* temp = test.RemoveWeapon();
	delete temp;
	test.GiveArmor(new ArmorTypes::BasicArmor);
	test.RemoveArmor();
	std::cin.get();
	return 0;
}

