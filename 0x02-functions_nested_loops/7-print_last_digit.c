#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: stores the last digit
 * Return: the number is returned
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;

	if (j < 0)
		j = -j;
	_putchar(j + '0');
	return (j);

}
