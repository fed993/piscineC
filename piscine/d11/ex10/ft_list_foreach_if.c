#include "ft_list.h"
#define NULL (void *)0

void	ft_list_foreach_if(t_list *head, void (*f)(void *), void *d, int (*cmp)())
{
	t_list  *temp;

	temp = head;
	while((temp != NULL))
	{
		if(cmp(temp->data, d))
		{
			f(temp->data);
		}
		temp = temp->next;
	}
}
