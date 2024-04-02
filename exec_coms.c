#include "monty.h"

/**
 * exec_c - executes predefined command if a match is positive
 * @av: pointert to stream to be evaluated
 *
 * Return: array of strings/tokens
 * void (*exec_c(char *str))(stack_t **stack, unsigned int line)
 */

int exec_c(char **commands, unsigned int line)
{
	instruction_t **fin_cmd = NULL;
	int i = 0;
	int num_pas;

/*
 * char comd_array[][2] =
 * {
 * { "add", add_opc },
		{ "div", div_opc },
		{ "mul", mul_opc },
		{ "nop", nop_opc },
		{ "pall", pall_opc },
		{ "pop", pop_opc },
		{ "pint", pint_opc },
		{ "sub", sub_opc },
		{ "rotl", rotl_opc },
		{ "swap", swap_opc },
		{ NULL, NULL }
	};
	*/
	instruction_t comd_array = {
		{ "add", add_opc },
		{ "div", div_opc },
		{ "mul", mul_opc },
		{ "nop", nop_opc },
		{ "pall", pall_opc },
		{ "pop", pop_opc },
		{ "pint", pint_opc },
		{ "sub", sub_opc },
		{ "rotl", rotl_opc },
		{ "swap", swap_opc },
		{ NULL, NULL }
	};

	commands = strtow(str);
	while (comds[i] != NULL)
	{
		/*
		 * if (strcmp(commands[0], comd_array[i][0]) == 1)
		 */
		if (strcmp(commands[0], comd_array[i].opcode) == 1)
		{
			if (commands[1])
			{
				num_pas = atoi(command[1]);
				if (!num_pas)
				{
					dprintf(2 "L%d: usage: push integer\n", line);
					exit(EXIT_SUCCESS);
				}
				fin_cmd = comd_array[i].f
				/*
				 * fin_cmd = comd_array[i][1]
				 * return (commd[i].second_membr(commands[1]));
				*/
			}
		}
		i++;
	}
	if (i > 10)
	{
		dprintf(1, "L%d: unknown instruction %s:", line, commands[0]);
		exit(EXIT_FAILURE);
	}
	fin_cmd(num_pass, num_pass);
	exit(EXIT_SUCCESS);
}
