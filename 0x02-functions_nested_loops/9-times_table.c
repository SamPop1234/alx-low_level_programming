#include "main.h"
#include <stdio.h>
/**
 * times_table- generates multiplication table
 * Return: void
 * @x: rows
 * @y: coloumns
 * @z: output of multiplication
 * @u: others
 * @d: others
 */


void times_table(void)
{
	int x, y, z, u, d;
	
	for (x = 0 ; x <= 9 x++)
	{
	for (y = 0 ; y <= 9 y++)
	{
	z = x * y;
	if (z > 0)
	{
		u = z % 10;
		d = (z - u) / 10;
		_putchar(44);
		_putchar(32);
		_putchar(u + '0');
		_putchar(d + '0';)
	}
	else
	{
		if (y != 0)
		{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		}
		_putchar(z + '0');
	}
	}
	_putchar('\n');
	}
}
