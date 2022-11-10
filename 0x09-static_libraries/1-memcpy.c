#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: Memory area copied to
 * @src: memory area copied from
 * @n: amount of bytes
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
