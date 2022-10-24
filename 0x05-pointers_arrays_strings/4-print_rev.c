#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_rev - Prints the reverse of a string
 * @s: String address to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0, len = 0;

	while (s[i++])
		len++;
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
