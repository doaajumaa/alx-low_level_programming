#include "main.h"
/**
 * _print_rev_recursion - prints s in revers
 * @s: string to print in revers
 *  Return: return 0
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
else
return (0);
}
