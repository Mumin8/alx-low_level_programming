#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '8'; d++)
	{
		for (e = '1'; e <= '9'; e++)
		{
			
			putchar(d);
			putchar(e);
			if (d != '8')
			{
				putchar(',');
				putchar(' ');
			}
		
		
	}
	putchar('\n');

	return (0);
}
