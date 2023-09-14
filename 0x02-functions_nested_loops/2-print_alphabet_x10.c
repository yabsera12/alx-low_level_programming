#include "main.h"
/**
 * print_alphabet_x10 - code that print alphabet * ten timw
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int s = 0;

	while (s < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
		s++;
	}
}
