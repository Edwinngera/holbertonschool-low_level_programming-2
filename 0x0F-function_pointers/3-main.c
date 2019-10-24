#include "3-calc.h"
/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int operation, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	operation = get_op_func(argv[2])(num1, num2);
	printf("%d\n", operation);
	return (0);
}