#include "main.h"
/**
 * f_queue - prints the top
 * @stack_head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_queue(stack_t **stack_head, unsigned int counter)
{
	(void)stack_head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @stack_head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **stack_head, int n)
{
	stack_t *new_node, *aux;

	aux = *stack_head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*stack_head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
