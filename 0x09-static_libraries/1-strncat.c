#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
*src = *dest;
n = n + 1;
return(dest);
}
