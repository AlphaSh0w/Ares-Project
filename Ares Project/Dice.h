#pragma once
#include <random>

class Dice
{
public:
	Dice();
	int SumRoll(int n = 1);
private:
	std::mt19937 rng = std::mt19937(std::random_device{}());
	std::uniform_int_distribution<int> dice_dist = std::uniform_int_distribution<int>(1,6);
};