#include "Stash.h"

void WeaponStash::equip(Soldier& soldier, int i)
{
	Weapon* temp = soldier.GiveWeapon(Stash::Pop(i));
	if (temp != nullptr)//If the soldier had a weapon, return it to the stash.
	{
		Stash::Add(temp);
	}
}
