#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - A function that prints a string, followed by a new line.
 * @s: A string to be printed
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
