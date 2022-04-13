#include <stdio.h>
#include "function_pointers.h"
int main(int argc, char *argv[])
{
	int answer = get_op_func(argv[2]);

	if (argc < 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (answer == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	if ( (argv[2] == '/' || argv[2] == '*') && (argv[3] == 0) )
	{
		printf("Error\n");
		exit (100);
	}
	answer(argv[1], argv[3]);
	return (0);
}
