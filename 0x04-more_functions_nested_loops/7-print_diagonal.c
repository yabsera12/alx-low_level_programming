#include "main.h"

/**
 * print_diagonal - draw dig.
 * @n:parameter
 */
void print_diagonal(int n)
{
	int r, num;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= n; r++)
		{
			if (r > 1)
			{
				for (num = 1; num <= r - 1; num++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
