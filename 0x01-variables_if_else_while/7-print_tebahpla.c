#include <stdio.h>

/**
 * main - Entry point
 * Discription: '7-print_tebahpla.c'
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	n--;
	return (0);
}
