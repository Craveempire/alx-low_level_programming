#include "main.h"
#include <string.h>

/**
 * _strpbrk - Function searches a string for any set of bytes
 * @s: String being searched
 * @accept: any bytes to be searched
 *
 * Return:  a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *r;

	r = strpbrk(s, accept);
	return (r);
}
