#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - find if loop existed in a linked list
 * @head: pointer to the head node
 *
 * Return: pointer to the loop if exist, otherwise NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast, *prev;

	slow = head;
	fast = head;
	while (slow != NULL)
	{
		if (fast != NULL)
		{
			fast = fast->next;
			if (fast != NULL)
			{
				prev = fast;
				fast = fast->next;
				slow = slow->next;
				if (slow == fast)
					return (prev);
			}
			else
			{
				slow = slow->next;
				continue;
			}
		}
		else
			slow = slow->next;
	}
	return (NULL);
}
