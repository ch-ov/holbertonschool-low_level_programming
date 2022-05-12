#include "main.h"
/**
 * jack_bauer - Counts up to 23:59.
 * @w@x@y@z: Variables
 * Return: void
 */
void jack_bauer(void)
{
	int w, x, y, z;

	for (z = 48; z <= 50; z++)
	{
		for (y = 48; y <= 57; y++)
		{
			for (x = 48; x <= 53; x++)
			{
				for (w = 48; w <= 57; w++)
				{
					_putchar(z);
					_putchar(y);
					_putchar(':');
					_putchar(x);
					_putchar(w);
					_putchar('\n');
					if (w == 57 && x == 53 && y == 51 && z == 50)
						return;
				}
			}
		}
	}
}
