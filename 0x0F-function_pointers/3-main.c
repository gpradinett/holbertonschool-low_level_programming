#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	num1 = 0;
	num2 = 0;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
	    && argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][1] == '\0')
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		result = (*get_op_func(argv[2]))(num1, num2);
		printf("%d\n", result);

	} else
	{

		printf("Error\n");
		exit(99);
	}
	return (0);
}
