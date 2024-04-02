#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "monty.h"

size_t char_count(char str[]);
/**
 * ischar - checks if a charcter is printable
 * @cha: character to check
 *
 * Return: 1 on success, 0 on falure
 */
int ischar(char cha)
{
	if (cha >= 33 && cha <= 126)
		return (1);
	if (cha >= 48 && cha <= 57)
		return (1);
	return (0);
}
/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: pointer to array of strings, NULL if str == NULL or "", or failure
 * occurs
 */
char **strtow(char *str)
{
	char **str_arr = NULL;
	char empty[] = "";
	int len;
	int elem_num = 0, posi_n;
	int m, z, p;

	if (str == NULL || *str == *empty)
		return (NULL);
	elem_num = char_count(str);
	if (elem_num == 0)
		return (NULL);
	str_arr = malloc((elem_num + 1) * sizeof(char *));
	if (!str_arr)
		return (NULL);
	str_arr[elem_num] = NULL;
	m = 0;
	for (z = 0; z < elem_num && str[m] != '\0'; m++)
	{
		if (ischar(str[m]) == 1)
		{
			posi_n = m;
			for (len = 0; ischar(str[m]) == 1; len++, m++)
				;
			str_arr[z] = malloc((len + 1) * sizeof(**str_arr));
			if (!str_arr[z])
				return (NULL);
			str_arr[z][len] = '\0';
			p = 0;
			for (; p < len && str; p++, posi_n++)
			{
				str_arr[z][p] = str[posi_n];
			}
			z++;
		}
		else
			continue;
	}
	return (str_arr);
}

/**
 * char_count - counts the number of characters in a string
 * @str: pointer to the string to count
 *
 * Return: number of words
 */
size_t char_count(char str[])
{
	int i;
	int det = 0;
	int in_wrd = 0;
	size_t elem_num = 0;

	for (i = 0; str[i] != '\0' && str; i++)
	{
		if (in_wrd == 1)
			det = 1;
		if (str[i] == 32 || str[i] == '\t')
			in_wrd = 0;
		else if (in_wrd == 0)
		{
			in_wrd = 1;
			elem_num++;
		}
	}
	if (det == 0)
		return (0);
	return (elem_num);
}
