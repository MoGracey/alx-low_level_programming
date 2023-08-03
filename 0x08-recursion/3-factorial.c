#include "main.h"

/**
 * factorial - calculate factorial of a number
 * @n: no to be calculated
 *
 * Return: return factorial
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else
		return (factorial(n - 1) * n);
}
