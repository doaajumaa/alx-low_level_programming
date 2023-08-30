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
	return (1);
else
	return (n * factorial(n - 1));
}
