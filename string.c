#include "monty.h"

/**
 * word_count - counts the number of words in a string
 * @string: the string to count
 * Return: the number of words in the string
 */
int word_count(char *string)
{
	int count = 0;
	int isPrevSpace = 1, i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == ' ' || string[i] == '\t' || string[i] == '\n')
			isPrevSpace = 1;
		else
		{
			if (isPrevSpace)
				count++;
			isPrevSpace = 0;
		}
	}
	return (count);
}
