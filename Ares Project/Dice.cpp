#include "Dice.h"
#include <assert.h>

Dice::Dice()
{
}

int Dice::SumRoll(int n)
{
	assert(n > 0); //If assertion fails, tried to roll negative or 0 times(n <= 0).
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += dice_dist(rng);
	}
	return sum;
}
