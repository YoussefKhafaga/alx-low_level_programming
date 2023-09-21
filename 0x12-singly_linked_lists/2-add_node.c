#include "lists.h"
#include <string.h>
#include <stddef.h>
/**
 * add_node - adds new node
 * @head: head of the list
 * @str: string
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}
	new->next = *head;
	new->str = strdup(str);
	new->len = strlen(str);
	*head = new;
	return (*head);
}

