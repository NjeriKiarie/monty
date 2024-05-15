#include "monty.h"

/**
 * f_pint - Prints the value at the top of the stack,
 * followed by a new line.
 * @head: The head of the stack
 * @counter: The line on which the error occurred
 *
 * Return: Nothing
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
