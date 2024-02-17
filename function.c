#include "function.h"
#include <assert.h>

int SumSqur(int quantity_)
{
	//int count = 0;
	int  sum = 0;
	for (int number = 1,  count = 0; count != quantity_; number++, count++)
	{
		sum += number * number;
	}
	return sum;
}
int SqurSum(int quantity_)
{
	int  sum = 0;
	for (int number = 1, count = 0; count != quantity_; number++, count++)
	{
		sum += number;
	}
	sum = sum * sum;
	return sum;
	
}

int IsPrime(unsigned long long int x)
{
	if (x == 2)
		return 1;
	if (x % 2 == 0)
		return 0;
	for (unsigned int n = 3; n < sqrt((double)x) + 1; n += 2)
		if (x % n == 0)
			return 0;
	return 1;
}

int CountPrime(int count_)
{
	assert(count_ > 0);

	if (count_ == 1)
		return 2;

	int x = 3;
	int c = 1;
	while (1)
	{
		if (IsPrime(x)) 
		{
			c++;
			if (c == count_)
				return x;

		}

		x += 2;
	}
}
