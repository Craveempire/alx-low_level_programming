#include <stdio.h>
/**
 * main - Prints all single digits in base 10
 * only using putchar
 * Return: Always 0.
 */
int main(void)
{
	int val;

	for (val = 0; val  < 10; val++)
		putchar((val % 10) + '0');

	putchar('\n');

	return (0);
}
