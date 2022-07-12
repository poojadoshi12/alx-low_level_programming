#include "main.h"
#include ‹stdio.h>
/**
* print_array - prints n elements of an array of integers.
* @a: pointer to array.
* @n: number of array elements.
*
* Return: void.
*/
void print_array(int "a, int n)

	int i;

	for (i = O; i < n; i++);
	{
		printf(" % d ", a[i]);
		if (i != n - 1)
		{
			printf(", ");
			printf("");
		}
	}
	printf("\n");
}
