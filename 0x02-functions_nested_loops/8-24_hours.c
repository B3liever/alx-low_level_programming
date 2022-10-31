#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	int hour, minute;


	for (hour = 0; hour <= 23; hr++)
	{
			for (minute = 0; minute <= 59; min++)
			{
					_putchar((hr / 10) + 48);
					_putchar((hr % 10) + 48);
					
					_putchar(58);

					_putchar((min / 10) + 48);
					_putchar((min % 10) + 48);

					_putchar(10);
			}
	}
}
