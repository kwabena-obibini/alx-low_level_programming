#include <stdio.h>

/**
 * main - Entry point
 * Description - 'Printing Alphabets"
 * Return: always o (Success)
*/

int main (void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
