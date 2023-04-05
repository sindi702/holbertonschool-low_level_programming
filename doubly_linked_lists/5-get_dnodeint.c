#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *   * @head: pointer to the head of the list
 *    * @index: index of the node to retrieve
 *     * Return: pointer to the nth node of the list, NULL if the node doesn't exist
 *      */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;
	
	while (current != NULL)
	{
		if (i ==index)
			return (current);
		i++;
		current = current->next;
	}
	return (NULL);
}

