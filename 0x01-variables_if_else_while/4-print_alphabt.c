#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	putchar('\n');

	return (0);
}
