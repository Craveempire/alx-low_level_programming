#include <stdio.h>
/**
 * main - Prints all possible two digit number
 * ranging from 0-99 sep by comma and space
 * Return: Always 0.
 */
int main(void)
{
	int fig1, fig2;

	for (fig1 = 0; fig1 <= 98; fig1++)
	{
		for  (fig2 = fig1 + 1; fig2 <= 99; fig2++)
		{
			putchar((fig1 / 10) + '0');
			putchar((fig1 % 10) + '0');
			putchar(' ');
			putchar((fig2 / 10) + '0');
			putchar((fig2 % 10) + '0');

			if (fig1 == 98 && fig2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
