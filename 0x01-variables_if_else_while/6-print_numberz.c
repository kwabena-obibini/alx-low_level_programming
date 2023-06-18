#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Printing single digits with while loop"
 * Return: Always 0 (Success)
 */

int main(void)
{
	int q;

	for (q = 0; q <= 9; q++)
	{
		putchar(q + 48);
	}
	putchar('\n');
	return (0);
}
