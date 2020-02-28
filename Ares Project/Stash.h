#pragma once
#include <vector>
#include "Weapons.h"
#include "Soldiers.h"

template <typename T>
class Stash
{
public:
	void Add(T* weapon)
	{
		stash.emplace_back(weapon);
	}
protected:
	Stash() = default;
	virtual void equip(Soldier& soldier, int i) = 0;
	T* Pop(int i) //Removes a pointer in the vector at the position i and returns it.
	{
		T* temp = stash[i];
		stash.erase(stash.begin()+i);
		return temp;
	}

private:
	std::vector<T*> stash;
};

class WeaponStash : public Stash<Weapon>
{
public:
	void equip(Soldier& soldier, int i) override;
};