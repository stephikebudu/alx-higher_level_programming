#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>

/**
 * struct lintint_s - this is a singly linked list
 * @n: function parameter 1
 * @next: function parameter 2
 *
 * Description: the data structure is singly linked list
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif
