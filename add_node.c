#include "main.h"
/**
 * addnode - adds node to the head of the stack
 * @stack_head: the head of the stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **stack_head, int n)
{

	stack_t *new_node, *aux;

	aux = *stack_head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *stack_head;
	new_node->prev = NULL;
	*stack_head = new_node;
}
