#include "main.h"
/**
 *_islower- checks for lower case character
 * Return: 1 and 0
 * @c: Parameter to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
