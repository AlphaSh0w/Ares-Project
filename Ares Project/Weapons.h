#pragma once
#include <string>
#include "Stats.h"

enum Weffect //different weapon effects
{
	None,
	ArmorBypass,
	LifeSteal
};

class Weapon
{
public:
	Stats GetStats() const;
	Weffect GetEffect() const;
	std::string GetName() const;
private:
	std::string name;
	Weffect effect;
protected:
	Weapon(int attack,int hp, int sp, int def, int initiative,std::string name, Weffect effect);
protected:
	Stats stats;
};

namespace WeaponTypes
{
	class Fists : public Weapon
	{
	public:
		Fists();
	};

	class Sword : public Weapon
	{
	public:
		Sword();
	};

	class VoidSword : public Weapon
	{
	public:
		VoidSword();
	};

	class LeechSword : public Weapon
	{
	public:
		LeechSword();
	};
}