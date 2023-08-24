#include "monty.h"
#include <stdio.h>

void free_stack(char **ptr)
/**
 * main - starting point
 * @ac: argument counter (from the terminal)
 * @av: argument vector
 * 
 * Return: EXIT_SUCCESS
 */
int main(int ac, char *av[])
{

	int fd = 0;
	int lin_count = 1;
	char *buffer[16];
	char **commands;
	instruct_t comd;
	stack_t *head = NULL;

	if (ac != 3)
	{
		perror(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open(av[2], O_RDONLY);
	if (fd < 0)
	{
		perror("Error: Can't open file %s", av[2]);
		close(fd);
		exit(EXIT_FAILURE);
	}
	buffer[15] = '\0';

	while (read(fd, buffer, 15) > 0)
	{
		lin_count++;
		commands = tokenize(buffer);
		comd = exec_c(commands);
		comd(&head,lin_count);
		free_stack(commands);
		free(head);
	}
	close(fd);
	return (EXIT_SUCCESS);
}

/**
 * free_stack - frees a stack_t list
 * @ptr: pointer to first node
 *
 * Return: None
 */
void free_stack(char **ptr)
{

	stack_t *trac = *ptr;

	if (*ptr == NULL)
		return;
	while (*trac != NULL)
	{
		trac = trav->next;
		free(head);
		head = trac;
	}	
}
