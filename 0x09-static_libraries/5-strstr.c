#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: String eing searched
 * @needle: substring being located
 *
 * Return: A pointer to the beginning of the located substring, or NULL
 * if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;

	h = strstr(haystack, needle);
	return (h);
}
