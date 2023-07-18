#include "main.h"
/**
 * print_to_98 - Print all natural numbers from n to 98
 * numbers should be printed in order
 * the first printed number should be the number passed to your function
 * the last printed number should be 98
 * you are allowed to use the standard library
 * @n: int type number
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
