#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - function copies n bytes from memory area src to memory area dest
 * @s: memory area
 * @b: constant byte
 * @n: first n byte to be filled
 *
 * Return: A pointer tothe filled memory @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
