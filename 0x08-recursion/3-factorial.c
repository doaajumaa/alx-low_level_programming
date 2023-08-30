#include "main.h"
/**
 * factorial - finds fac of number
 * @n: number to find it's fac
 * Return: returns factorial
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0)
	return (0);
else
	return (1 * factorial(n - 1));
}
