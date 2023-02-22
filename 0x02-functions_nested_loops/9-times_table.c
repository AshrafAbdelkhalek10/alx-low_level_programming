#include "main.h"

/**
 * times_table - to check if is letter or not
 * Return: (Success)
 */
void times_table(void)
{
	int i;
	int j;
	int tmp;
	int x;
	int z;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			tmp = j * i;
			if (tmp > 9)
			{
				x = tmp % 10;
				z = (tmp - x) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(z + '0');
				_putchar(x + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(tmp + '0');
			}
		}
			_putchar('\n');
	}
}
