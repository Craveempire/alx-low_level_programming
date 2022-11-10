#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substrin
 * @s: Initial segment
 * @accept: @s consist of bytes from
 *
 * Return: Number of bytes in the initial segment of s
 * Which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int y;

	y = strspn(s, accept);
	return (y);
}
