#include "monty.h"

/**
 * initialise_stack - initialises a stack
 * Return: pointer to stack
 */
stack_t *initialise_stack(void)
{
	stack_t *head = malloc(sizeof(stack_t));
	stack_t *tail = malloc(sizeof(stack_t));

	if (head == NULL || tail == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	head->next = tail;
	tail->prev = head;
	return (head);
}

/**
 * word_count - counts the number of words in a string
 * @stack: pointer to stack
 * @line_number: line number
 */
void stack_push(stack_t **stack,
				unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = atoi(monty_tokens[1]);
	new_node->next = (*stack)->next;
	(*stack)->next->prev = new_node;
	new_node->prev = (*stack);
	(*stack)->next = new_node;
}

/**
 * stack_pall - prints all values on the stack
 * @stack: pointer to stack
 * @line_number: line number
 */
void stack_pall(stack_t **stack,
				unsigned int line_number)
{
	stack_t *current = (*stack)->next;

	while (current->next != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
