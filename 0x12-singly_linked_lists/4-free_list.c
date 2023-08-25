#include "lists.h"


/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *node_x;

	while ((node_x = head) != NULL)
	{
		head = head->next;
		free(node_x->str);
		free(node_x);
	}
}
