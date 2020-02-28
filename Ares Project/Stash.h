#pragma once
#include <vector>
#include "Weapons.h"

template <typename T>
class Stash
{
public:
	Stash() = default;
	void Add(T* weapon)
	{
		stash.emplace_back(weapon);
	}
	void Remove(int i)
	{
		stash.erase(stash.begin()+i);
	}
private:
	std::vector<T*> stash;
};
