#include "ft_list.h"
#define NULL (void *)0

t_list	*ft_list_find(t_list *head, void *d, int (*cmp)())
{
	t_list  *temp;

	temp = head;
	while((temp != NULL))
	{
		if(cmp(temp->data, d))
		{
			return (temp);
		}
		temp = temp->next;
	}
	return (NULL);
}
