#include "main.h"

/**
 * main - This is my main function
 *
 * Return: 0, Always
 */
int main(void)
{
	int n = 32;
	char *s = "Poop!";
	int a[] = {1, 2, 3, 4, 5};

	printf("%p\n", &n);

	travstr(s);
	ops(a, 5);

	return (0);
}
