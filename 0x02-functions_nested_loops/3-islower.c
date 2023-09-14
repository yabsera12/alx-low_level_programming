#include "main.h"
/**
 * _islower - if c is not lowercase return 0 else 1.
 * @c:is an intijer for input.
 *
 * Return: 0 on success.
 */
int _islower(int c)
{
	int result = 0;
	int copyofc = c;

	if (copyofc >= 97 && copyofc <= 122)
	{
		result = 1;
	}
	return (result);
}
