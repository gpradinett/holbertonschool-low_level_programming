#include <stdlib.h>
#include <stdio.h>
/**
 * op_add- isdigit
 * @a: integer
 * @b: integer
 * Return: prints alphabet
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub- isdigit
 * @a: integer
 * @b: integer
 * Return: prints alphabet
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul- isdigit
 * @a: integer
 * @b: integer
 * Return: prints alphabet
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div- isdigit
 * @a: integer
 * @b: integer
 * Return: prints alphabet
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("%s", "Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod- isdigit
 * @a: integer
 * @b: integer
 * Return: prints alphabet
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("%s", "Error\n");
		exit(100);
	}
	return (a % b);
}
