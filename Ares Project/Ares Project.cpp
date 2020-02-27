// Ares Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Soldiers.h"
#include "Weapons.h"
#include "Armor.h"
#include "Dice.h"
int main()
{
	Dice d;
	d.SumRoll();
	Sword sword(20);
	sword.GetEffect();
	Peasant peasant;
	Peasant p2;
	p2.GiveArmor(new BasicArmor());
	peasant.GiveWeapon(new Sword(20));
	peasant.Attack(p2);
	peasant.Attack(p2);
	peasant.Attack(p2);
	peasant.Attack(p2);
	peasant.GiveArmor(new BasicArmor());
    std::cout << "Hello World!\n";
}

