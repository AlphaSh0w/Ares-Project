#pragma once
#include <random>

class Dice
{
public:
	Dice();
	int SumRoll(int n = 1);
private:
	std::mt19937 rng;
	std::uniform_int_distribution<int> dice_dist;
};