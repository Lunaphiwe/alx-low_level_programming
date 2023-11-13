#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 */

void swap_int(int *a, int *b)
	/* the function that swaps the value of two integer. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
