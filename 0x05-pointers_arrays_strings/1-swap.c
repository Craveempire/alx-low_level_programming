#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the value of two integer with address given
 * @a:  The first address given
 * @b:  The second address given
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int m = *b;
	int n = *a;

	*a = m;
	*b = n;
}
