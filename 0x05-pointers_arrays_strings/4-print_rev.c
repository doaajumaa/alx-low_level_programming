#include "main.h"
/**
 *print_rev - prinr string in rev
 *@s: string to print
 *Return: returns string in revers
 */
void print_rev(char *s)
{
int x;
int count = 0;
for (x = 0; s[x] != '\0'; x++)
	count++;
for (x = count - 1 ; x >= 0; x--)
_putchar(s[x]);
_putchar('\n');
}
