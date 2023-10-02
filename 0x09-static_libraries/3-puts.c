#include "main.h"
/**
 * _puts- writes the character
 * @str: variable name
 * Return:void
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');

}
