#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - A function that frees a memory
 * @head: the pointer to the first node
 * Return: the first node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);

	tmp = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (i);
}
