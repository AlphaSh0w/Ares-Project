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
	WeaponStash w;
	w.Add(new WeaponTypes::Sword(350));
	w.Add(new WeaponTypes::Sword(150));
	w.Add(new WeaponTypes::Sword(300));
    std::cout << "Hello World!\n";
	SoldierTypes::Peasant test;
	w.equip(test, 1);
	w.equip(test, 1);
	w.equip(test, 1);
	test.GiveWeapon(new WeaponTypes::Sword(20));
	Weapon* temp = test.RemoveWeapon();
	delete temp;
	test.GiveArmor(new ArmorTypes::BasicArmor);
	test.RemoveArmor();
	std::cin.get();
	return 0;
}

