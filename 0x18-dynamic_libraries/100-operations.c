#include <stdio.h>

/**
 * add - Function to add two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of 'a' and 'b'
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Function to subtract two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Difference of 'a' and 'b'
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Function to multiply two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Product of 'a' and 'b'
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Function to divide two integers (integer division)
 * @a: Numerator
 * @b: Denominator
 *
 * Return: Result of 'a' divided by 'b'
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	printf("Error: Division by zero\n");
	return (0);
}

/**
 * mod - Function to compute the modulo of two integers
 * @a: Dividend
 * @b: Divisor
 *
 * Return: Remainder of 'a' divided by 'b'
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	printf("Error: Modulo by zero\n");
	return (0);
}
