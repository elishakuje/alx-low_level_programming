#include <stdio.h>
/**
 * main - Prints all possible different combinations
 * of two digits between 00 to 89.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x, y;

	x = 48;
	y = 48;

	while (y < 58)
	{
		x = 48;
		while (x < 58)
		{
			if (x != 57 && y == 56)
			{
				putchar(y);
				putchar(x);
				if (x == 57 && y == 56)
				{
					break;
				}
				putchar(',');
				putchar(',');
			}
			x++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
