#include "main.h"

/**
 * reverse_array - check code.
 * @a: is a pointer type char
 * @n: is a pointer type char
 * Return: Always 0.
 *
 */
void reverse_array(int *a, int n)
{
int result[500];
int i;
n--;

for (i = 0; i <= n; i++)
result[i] = a[i];

for (i = 0; i <= n; i++)
a[i] = result[n - i];
}
