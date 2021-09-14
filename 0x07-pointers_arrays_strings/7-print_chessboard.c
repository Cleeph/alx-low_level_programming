#include "main.h"

/**
 * print_chessboard - locates character in string
 * @a: pointer type char
 * Return: The number of bytes repeated
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] != '\0')
			{
				_putchar(a[i][j]);
			}
		}
		_putchar('\n');
	}
}
