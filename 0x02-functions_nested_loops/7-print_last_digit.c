#include "main.h"

/**
 * print_last_digit - prints the last digit of numbers
 * @num: the int running the check
 * Return: value of the last number
 */

int print_last_digit(int num)
{
	int a;

	if (num < 0)
		num = -num;
	a = num % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}

