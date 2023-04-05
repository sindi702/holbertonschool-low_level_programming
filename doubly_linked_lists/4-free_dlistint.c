#include <stdlib.h>
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
		dlistint_t *next = current->Next;
		free( current );
		current = next;
	}
