#include "main.h"

/**
 * print_diagonal function that draws a diagonal line on the terminal
 * input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
