#include "main.h"
/**
  *f_sub- subtration
  *@stack_head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **stack_head, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *stack_head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack_head);
		exit(EXIT_FAILURE);
	}
	aux = *stack_head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*stack_head = aux->next;
	free(aux);
}
