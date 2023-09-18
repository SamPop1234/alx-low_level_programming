#include "main.h"

/**
 * swap_int- swaps intigers
 * @a: integer to be swapped
 * @b: integer to be swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
