#include "main.h"

/**
 * _strncpy - check code.
 * @dest: is a pointer type char
 * @src: is a pointer type char
 * @n: is a int variable
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{

int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
