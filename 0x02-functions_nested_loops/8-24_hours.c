#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: returns void
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
				_putchar((hour / 10) + 48);
				_putchar((hour % 10) + 48);

				_putchar(58);

				_putchar((minute / 10) + 48);
				_putchar((minute % 10) + 48);

				_putchar(10);

		}

	}
}
				
