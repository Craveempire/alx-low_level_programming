#include <stdio.h>
/**
 * main - Print lowercase alphabets
 *
 * Return: Always 0.
 */
int main(void)
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
		putchar(word);
	putchar('\n');

	return (0);
}
