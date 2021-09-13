#include "main.h"

/**
 * _memset - memory with constant byte
 * @s: is a pointer char type
 * @b: is a variable char type
 * @n: is constant int type
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;

for ( ; i < n; i++)
s[i] = '\0';


return (s);
}
