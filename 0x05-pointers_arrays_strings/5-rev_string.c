#include "main.h"
/**
 * rev_string - revers the string
 * @s: string to revers
 * Return: returns void
 */
void rev_string(char *s)
{
int x;
int count = 0;
for (x = 0; s[x] != '\0'; x++)
	count++;
for (x = 0; x < count / 2; x++)
{
char y;
y = s[x];
s[x] = s[count - 1 - x];
s[count - 1 - x] = y;
}
}
