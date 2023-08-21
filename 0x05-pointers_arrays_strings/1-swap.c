#include "main.h"
 /**
  * swap_int - Swap the values of two ints
  * @a: first var
  * @b: second var
  * Return: returns void
  */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
