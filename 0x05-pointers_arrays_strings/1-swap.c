#include "main.h"
 /**
  * swap_int - swap two intigers
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
