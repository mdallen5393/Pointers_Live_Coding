#include "main.h"

/**
 * travstr - this traverses a string and does stuff to it.
 * @s: string to do stuff to
 */
void travstr(char *s)
{
	int len = 0;
	int i;
	
	/* string length */
	while (s[len] != '\0')
		len++;

	printf("%d\n", len);

	/* printing using putchar */
	i = 0;
	while (s[i])
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');

	/* print using putchar when you know the len */
	for (i = 0; i < len; i++)
		putchar(s[i]);
	putchar('\n');
}
