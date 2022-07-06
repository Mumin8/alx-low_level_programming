#include "main.h"
/**
 * print_sign(n) - This  will print the sign of a number
 * @n: The number to be printed
 * Return: 1 if n is greater than 0
 *         0 if n equal 0
 *         -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
