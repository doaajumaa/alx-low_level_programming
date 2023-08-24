#include "main.h"
/**
 * cap_string  - turn lowercase to upper case in s after delimiter
 * @str: string of chars
 * Return: returns the new string
 */
char *cap_string(char *str)
{
int index = 0;
while (str[index])
{
while (!(str[index]  >= 'a' && str[index] <= 'z'))
	index++;
if (str[index - 1] == ' ' ||
str[index - 1] == '\t' ||
str[index - 1] == '\n' ||
str[index - 1] == '.' ||
str[index - 1] == ';' ||
str[index - 1] == '!' ||
str[index - 1] == '?' ||
str[index - 1] == '"' ||
str[index - 1] == '(' ||
str[index - 1] == ')' ||
str[index - 1] == '{' ||
str[index - 1] == '}' ||
str[index - 1] == ',' ||
index == 0)
str[index] = str[index] - 32;
index++;


}
return (str);
}
