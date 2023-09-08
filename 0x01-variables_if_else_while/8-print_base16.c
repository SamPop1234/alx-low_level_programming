#include <stdio.h>
/**
 * main- contains the main function
 * Return: returns 0 if succesful
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
