#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat
 * @s1: s1
 * @s2:s2
 * @n:n
 * Return: return ponter
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1len = 0;
unsigned int s2len = 0;
unsigned int i;
char *m;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (i = 0; s1[i] != '\0'; i++)
	s1len++;
for (i = 0; s2[i] != '\0'; i++)
	s2len++;
m = malloc(sizeof(char) * (s1len + n) + 1);
if (m == NULL)
	return (NULL);

if (n >= s2len)
{
for (i = 0; s1[i] != '\0'; i++)
	m[i] =  s1[i];
for (i = 0; s2[i] != '\0'; i++)
	m[s1len + i] = s2[i];
m[s1len + i] = '\0';
}
else
{
for (i = 0; s1[i] != '\0'; i++)
	m[i] = s1[i];
for (i = 0; i < n; i++)
	m[s1len + i] = s2[i];
m[s1len + i] = '\0';
}
return (m);
}
