#include "main.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @stack_head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mul(stack_t **stack_head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *stack_head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack_head);
		exit(EXIT_FAILURE);
	}
	h = *stack_head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*stack_head = h->next;
	free(h);
}
