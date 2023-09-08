#include <stdio.h>
/**
 * main- includes the main function
 * Return: returns 0 if successful
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'p' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
