#include "main.h"

/**
 * more_numbers function that prints 10 times the numbers, from 0 to 14
 * _putchar 3 times
 * Return: 0-14 x10 followed by new line
 */
void more_numbers(void)
{
	int i, x;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i <= 14; i++)
		{
		  _putchar(i);
		}
		_putchar('\n');
	}
}
