#include "lists.h"

/**
 * insert_node - this function will insert number in sorted singly-linked list
 * @head: function parameter 1
 * @number: function parameter 2
 *
 * Return: pointer to new node, else NULL
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}
	while (node && node->next && node->next->n < number)
		node = node->next;
	new->next = node->next;
	node->next = new;
	return (new);
}
