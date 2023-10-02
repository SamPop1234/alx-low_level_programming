#include "main.h"
/**
 * _isdigit- checks the parameter
 * @c: parameter to be checked
 * Return: returns 1 and 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
