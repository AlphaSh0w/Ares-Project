// Ares Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Soldiers.h"
#include "Weapons.h"
#include "Armor.h"
#include "WeaponStash.h"

int main()
{
	WeaponStash w;
	w.AddWeapon(new WeaponTypes::Sword(350));
    std::cout << "Hello World!\n";
	SoldierTypes::Peasant test;
	test.GiveWeapon(new WeaponTypes::Sword(20));
	Weapon* temp = test.RemoveWeapon();
	delete temp;
	test.GiveArmor(new ArmorTypes::NoArmor);
	test.RemoveArmor();
	std::cin.get();
	return 0;
}

