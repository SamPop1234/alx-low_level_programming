#include "main.h"
/**
 * _abs- function to find absolute of a number
 * @a: function to be calculated
 * Return: returns absolute of the value
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else if (a > 0)
	{
		return (a);
	}
	return (0);
}
