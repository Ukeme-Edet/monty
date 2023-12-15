#include "monty.h"

/**
 * main - The programs main entrypoint
 * @argc: The number of arguments passed to the program
 * @argv: The arguments passed to the program
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	/* stack_t *stack = initialise_stack(); */
	FILE *file;
	size_t i;
	stack_t *monty_stack = initialise_stack();
	char line[1024], **monty_tokens;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	for (i = 0; fgets(line, 1024, file) != NULL && ++i; i++)
	{
		monty_tokens = parse_line(line);
		if (monty_tokens[0] == NULL)
			continue;
		execute(monty_tokens, monty_stack, i);
	}
	return (0);
}

/**
 * execute - executes a line of monty code
 * @tokens: array of strings
 * @stack: pointer to stack
 * @line_number: line number
 */
void execute(char **tokens, stack_t *stack, unsigned int line_number)
{
	int i;
	instruction_t instructions[] = {
		{"push", stack_push},
		{"pall", stack_pall},
		{NULL, NULL}};
	for (i = 0; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(tokens[0], instructions[i].opcode) == 0)
		{
			instructions[i].f(&stack, line_number);
			return;
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, tokens[0]);
	exit(EXIT_FAILURE);
}
