#include "monty.h"

/**
 * exec_c - executes predefined command if a match is positive
 * @av: pointert to stream to be evaluated
 * 
 * Return: array of strings/tokens
 */
void (*exec_c(char *str))(stack_t **stack, unsigned int line)
{
	char **commands;
	int i = 0;

	instruction_t comds[] = 
	{
		{"add", op_add},
		{"div", op_div},
		{"mul", op_mul},
		{"nop", op_nop},
		{"pall", op_pall},
		{"pop", op_pop},
		{"pint", op_pint},
		{"sub", op_sub},
		{"rotl", op_rotl},
		{"swap", op_swap},
		{NULL, NULL}
	};

	commands = strtow(str);
	while (comds[i] != NULL) 
	{
		if (strcmp(commands[0], commd[i].first_membr) == 1)
			return (commd[i].second_membr(commands[1]));
		i++;
	}
	if (i > 0)
	{
		dprintf(1, "L%d: unknown instruction %s:", count, commands[0]);
		exit(EXIT_FAILURE);
	}
}
