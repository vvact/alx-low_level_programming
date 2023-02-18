#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0(success)
 */
int main(void)
{
	int c = 0;
	int f;
	int i;

	int c2;
	int f2;
	int i2;

	while (c <= 98)
	{
		f = (c / 10 + '0');
		i = (c % 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			f2 = (c2 / 10 + '0');
			i2 = (c2 % 10 + '0');

			if (c < c2)
			{
				putchar(f);
				putchar(i);
				putchar(' ');
				putchar(f2);
				putchar(i2);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
