#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
		t_list	*link;

		link = ft_create_elem(data);
		if(*begin_list == NULL)
		{
				*begin_list = link;
				link->data = data;
		}
		else
		{
				while(((*begin_list)->next) != NULL)
				{
						(*begin_list) = (*begin_list)->next;
				}
				(*begin_list)->next = link;
				link->data = data;
		}
}
