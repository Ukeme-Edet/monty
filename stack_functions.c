#include "monty.h"
char **monty_tokens;

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

void stack_push(stack_t **stack, unsigned int __attribute__((unused)) line_number)
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

void stack_pall(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	stack_t *current = (*stack)->next;
	while (current->next != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
