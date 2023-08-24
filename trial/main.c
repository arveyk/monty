#include "monty.h"
#include <stdio.h>

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
	char *buffer[16];
	char **commands;

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
		commands = tokenize(buffer);
		exec_c(commands);
		free(commands);
	}

	close(fd);
	return (EXIT_SUCCESS);
}
