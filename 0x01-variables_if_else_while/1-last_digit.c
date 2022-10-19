#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)

{

	int n;

	int n0;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	n0 = n % 10;

	if (n0 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n0);
	else if (n0 == 0)
		printf("Last digit of %d is %d and is 0\n", n, n0);
	else if (n0 < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n0);

	return (0);
}
