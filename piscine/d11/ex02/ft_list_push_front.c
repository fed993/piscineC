#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*link;
	t_list	*temp;

	link = ft_create_elem(data);
	link->data = data;
	temp = *begin_list;
	*begin_list = link;
	(*begin_list)->next = temp;
}
