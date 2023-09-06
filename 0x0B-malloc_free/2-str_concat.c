#include "main.h"
/**
 * str_concat - concat two strings
 * @s1: first str to con
 * @s2: to conc
 * Return: return pointer to result
 */
char *str_concat(char *s1, char *s2)
{
int s1l = 0;
int s2l = 0;
int i;
char *con;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (i = 0; s1[i] != '\0'; i++)
	s1l++;
for (i = 0; s2[i] != '\0'; i++)
	s2l++;
con = malloc(sizeof(char) * (s1l + s2l) + 1);
if (con == NULL)
	return (NULL);
for (i = 0; s1[i] != '\0'; i++)
	con[i] = s1[i];
for (i = 0; s2[i] != '\0'; i++)
	con[s1l + i] = s2[i];
return (con);
}
