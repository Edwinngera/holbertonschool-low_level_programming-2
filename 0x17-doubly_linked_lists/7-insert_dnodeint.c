#include "lists.h"
/**
 * insert_dnode_at_index - inserts a new node at a given posotion
 * @head: the pointer to the struct
 * @idx: index of the list where the new node should be added
 * @n: integer in the struct
 * Return: Address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
unsigned int idx, int n)
{
	dlistint_t *newnode, *current = *head, *prev;
	unsigned int index;

	newnode = malloc(sizeof(dlistint_t));
	if (*head == NULL && idx != 0)
		return (NULL);
	if (newnode != NULL)
	{
		if (*head == NULL)
		{newnode->next = NULL;
			newnode->prev = NULL;
			newnode->n = n;
			*head = newnode;
			return (newnode);
		}
		else
		{prev = NULL;
			while (current->prev != NULL)
				current = current->prev;
			for (index = 0; current != NULL && index < idx; index++)
			{prev = current;
				current = current->next;
			}
			if (index != idx)
			{return (NULL);
			}
			else
			{newnode->n = n;
				newnode->prev = prev;
				if (current != NULL)
					current->prev = newnode;
				newnode->next = current;
				if (idx == 0)
					*head = newnode;
				prev->next = newnode;
				return (newnode);
			}
		}
	}
	return (NULL);
}