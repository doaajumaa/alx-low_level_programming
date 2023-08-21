#include "main.h"
/**
 * puts_half -  prints the last half of the string
 * @str: string to print
 * Return: return void
 */
void puts_half(char *str)
{
int i, j, count = 0;
for (i = 0; str[i] != '\0'; i++)
	count++;
j = (count - 1) / 2;
for (i = j + 1; str[i] != '\0' ; i++)
	_putchar(str[i]);
_putchar('\n');
}
