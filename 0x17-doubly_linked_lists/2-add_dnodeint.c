#include "lists.h"
/**
 * add_dnodeint - add a node at the beginning
 * @head: the head of the list
 * @n: the data in node
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL;

	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		new_node->n = n;
		*head = new_node;
	}
	else
	{

		new_node->n = n;
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}

	return (new_node);
}

