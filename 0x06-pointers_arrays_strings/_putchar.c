#include <stdio.h>
/**
 *_putchar - write char cto stdout
 *@c: the char to print
 * Return: returns -1 
 */
int _putchar(char c)
{
return(write(1,&c,1));
}
