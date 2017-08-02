#include "ft_list.h"
#define NULL (void *)0

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list  *temp;

	temp = begin_list;
	while((temp != NULL) && (temp->next != NULL))
	{
		f(temp->data);
		temp = temp->next;
	}
	f(temp->data);
}
