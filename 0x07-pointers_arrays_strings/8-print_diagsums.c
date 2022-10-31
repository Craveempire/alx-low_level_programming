#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals of a square matrix integers
 * @a: matrix
 * @size: size of matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, p;

	for (p = 0; p < size; p++)
	{
		i += a[p];
		a += size;
	}
	a -= size;
	for (p = 0; p < size; p++)
	{
		j += a[p];
		a -= size;
	}
	printf("%d, %d\n", i, j);
}
