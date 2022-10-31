#include "main.h"
#include <string.h>

/**
 * _strchr - Locates a character in a string
 * @s: The string
 * @c: The character
 *
 * Return: A pointer to thr first occurence of the character c in
 * the strings or Null if not found
 */
char *_strchr(char *s, char c)
{
	char *b;

	b = strchr(s, c);
	return (b);
}
