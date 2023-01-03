#include "main.h"

/**
 * print_line - prints the straight line using ('_')
 * @n: the number of '_' to be printed
 */

void print_line(int n)
{
	int i;

	if (n > 0)
		_putchar(10);
	else
	{
		for (i = 0; i < n; i++)
			_putchar(95);


		_putchar(10);
	}

}
