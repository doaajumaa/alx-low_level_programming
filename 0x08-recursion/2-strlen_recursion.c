#include "main.h"
/**
 * _strlen_recursion - recursivly return number of chars in string
 * @s: string to count
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
	return (1 + _strlen_recursion(s + 1));
}
return (0);
}
