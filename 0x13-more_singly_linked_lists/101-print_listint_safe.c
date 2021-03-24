#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t len, lp;

	slow = head;
	fast = head;
	len = 0;
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *) slow, slow->n);
		len++;
		if (fast != NULL)
		{
			fast = fast->next;
			if (fast != NULL)
			{
				fast = fast->next;
				slow = slow->next;
				if (slow == fast)
				{
					lp = 
					while (lp > 0)
					{
						printf("[%p] %d\n", (void *) slow, slow->n);
						len++;
						lp--;
						slow = slow->next;
					}
					return (len);
				}
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
	return (len);
}
