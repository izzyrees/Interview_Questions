#include <iostream>

// Function: fib
// Purpose: calculate a given fibbonaci number
// Input: positive whole number to calculate fib for
// Output: positive fib number
unsigned int fib(unsigned int n)
{
	if (n < 2)
	{
		return n;
	}
	else
	{
		unsigned int twoBack = 0;
		unsigned int oneBack = 1;
		unsigned int result = 0;

		for (unsigned int i = 1; i < n; i++)
		{
			result = oneBack + twoBack;

			twoBack = oneBack;
			oneBack = result;
		}

		return result;
	}
}

int main()
{
	unsigned int numToCalc = 0;
	std::cout << "How many Fibonacci numbers do you want? " << std::endl;
	std::cin >> numToCalc;

	for (unsigned int i = 0; i <= numToCalc; i++)
	{
		std::cout << "\t" << i << " : " << fib(i) << std::endl;
	}

	return 0;
}