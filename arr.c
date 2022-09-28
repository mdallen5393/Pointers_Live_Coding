#include "main.h"

/*
 * ops - does stuff to array of integers
 * @a: array to do stuff to
 */
void ops(int *a, int len)
{
	int i;

	/* calc len */
	for (i = 0; i < len; i++)
		putchar(a[i] + '0');
	
	printf("len of a: %d\n", len);
}
