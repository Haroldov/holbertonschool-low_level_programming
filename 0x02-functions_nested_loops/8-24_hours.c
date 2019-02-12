#include "holberton.h"

/**
 *jack_bauer - prints the hours of the day
 *
 *Return: none
 */

void jack_bauer(void)
{
	int dh, uh, dm, um, sw;

	dh = 0;
	while (dh <= 2)
	{
		for (uh = 0; uh <= 9; uh++)
		{
			for (dm = 0; dm <= 5; dm++)
			{
				for (um = 0; um <= 9; um++)
				{
					_putchar(dh + '0');
					_putchar(uh + '0');
					_putchar(':');
					_putchar(dm + '0');
					_putchar(um + '0');
					_putchar('\n');
					if ((um == 9) && (dm == 5) && (uh == 3) && (dh == 2))
					{
						sw = 1;
					}
				}
				if (sw == 1)
					break;
				}
			if (sw == 1)
				break;
		}
		dh += 1;
		if (sw == 1)
			break;
	}
}
