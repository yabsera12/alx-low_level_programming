#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int x = 1;

	while (x <= 10)
	{
		for (i = 0 ; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		x++;
		_putchar('\n');
	}
}
