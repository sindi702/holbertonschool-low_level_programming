#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_dlistint - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;
		free( current );
		current = next;
	}
}
