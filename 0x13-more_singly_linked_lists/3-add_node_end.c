#include "lists.h"
#include <string.h>
#include <stddef.h>
/**
 * add_node_end - adds node to the end
 * @head: head of the list
 * @str:string
 * Return: address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *temp = malloc(sizeof(list_t));

	if (!new || !temp)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = NULL;
		*head = temp;
		return (*head);

	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	new->next = NULL;
	new->str = strdup(str);
	new->len = strlen(str);
	temp->next = new;
	return (temp);
}

