#include <stdio.h>
/**
 * main- main function
 * Return: returns 0
 */

int main(void)
{
	int a = 0;
	int  b = 0;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			if (a == b && a < b)
				putchar(a + 48);
			putchar(b + 48);
			if (a + b != 17)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
