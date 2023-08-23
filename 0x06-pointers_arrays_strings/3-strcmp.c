#include "main.h"
/**
 * _strcmp - compare 2 ints
 * @s1: first int to compare
 * @s2: secont int to compare
 * Return: returns the suptract
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
return (s1[i] - s2[i]);
return (0);
}
