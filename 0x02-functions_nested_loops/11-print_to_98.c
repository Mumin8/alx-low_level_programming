#include <stdio.h>
/**
 * print_to_98 - It will print from the number
 *
 * @num: The number at which counting starts from
 */
void print_to_98(int num)
{
	if (num >= 98)
	{
		while (num > 98)
		{
			printf("%d, ", num);
			num = num - 1;
		}
	}
	else
	{
		while (num < 98)
		{
			printf("%d, ", num);
			num = num + 1;
		}
	}
	printf("%d\n", num);
}

