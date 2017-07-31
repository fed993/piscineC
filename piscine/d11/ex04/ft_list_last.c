#include "ft_list.h"
#define NULL (void *)0

t_list	*ft_list_last(t_list *begin_list)
{
	if(begin_list == NULL)
	{
		return (NULL);
	}
	else
	{
		while((begin_list->next) != NULL)
		{
			(begin_list) = (begin_list)->next;
		}
		return (begin_list);
	}
}
