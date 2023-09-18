# include "main.h"

/**
 * print_rev- prints strings in reverse
 * @s: string to be considered
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int count;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count - 1 ; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
