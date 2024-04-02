#include "monty.h"
#include <stdio.h>

#define BUF_S 32

void free_stack(char **ptr);

/**
 * main - starting point
 * @argc: argument counter (from the terminal)
 * @argv: argument vector
 *
 * Return: EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{

	instruction_t *comd;
	int buff_chrs;
	int fd = 0;
	unsigned int lin_count = 1;
	char *buffer[BUF_S];
	char **commands;
	char *bp;

	if (argc != 3)
	{
		perror(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[2], O_RDONLY);
	if (fd < 0)
	{
		dprintf("Error: Can't open file %s", argv[2]);
		close(fd);
		exit(EXIT_FAILURE);
	}
	buffer[BUF_S - 1] = '\0';

	buff_chrs = read(fd, buffer, BUF_S - 1);

	while (buff_chrs > 0)
	{
		bp = buffer;

		commands = strtow(buffer);

		/*
		 * comd->f = exec_c(commands);
		 * (comd->f)(&head, lin_count);
		 */
		exec_c(commands, lin_count);

		buff_chrs = read(fd, buffer, BUF_S - 1);

		bp += buff_chrs;
/*
 *		buff_chrs -= written_chrs;
		free(head);
 */
		free_stack(commands);
		lin_count++;
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

	stack_t *trav = *ptr;

	if (*ptr == NULL)
		return;
	while (*trav != NULL)
	{
		trav = trav->next;
		free(head);
		head = NULL;
		head = trav;
	}
	trav = NULL;
}
