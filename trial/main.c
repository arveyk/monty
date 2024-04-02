#include "monty.h"
#include <stdio.h>


#define BUF_SIZE 16
/**
 * main - starting point
 * @ac: argument counter (from the terminal)
 * @av: argument vector
 * 
 * Return: EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{

	int fd = 0;
	char *buffer[BUF_SIZE];
	char **commands;

	if (argc != 3)
	{
		perror(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[2], O_RDONLY);
	if (fd < 0)
	{
		perror("Error: Can't open file %s", argv[2]);
		close(fd);
		exit(EXIT_FAILURE);
	}
	buffer[15] = '\0';

	while (read(fd, buffer, BUF_SIZE - 1) > 0)
	{
		commands = tokenize(buffer);
		exec_c(commands);
		free(commands);
	}

	close(fd);
	return (EXIT_SUCCESS);
}
