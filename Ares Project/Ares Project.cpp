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
	Stash<Weapon> w;
	Stash<Armor> a;
	w.Add(new WeaponTypes::Sword(350));
	w.Add(new WeaponTypes::Sword(350));
	a.Add(new ArmorTypes::BasicArmor);
	a.Add(new ArmorTypes::BasicArmor);
	a.Remove(0);
    std::cout << "Hello World!\n";
	SoldierTypes::Peasant test;
	test.GiveWeapon(new WeaponTypes::Sword(20));
	Weapon* temp = test.RemoveWeapon();
	delete temp;
	test.GiveArmor(new ArmorTypes::BasicArmor);
	test.RemoveArmor();
	std::cin.get();
	return 0;
}

