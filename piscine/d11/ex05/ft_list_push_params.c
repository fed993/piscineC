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

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;

	list = NULL;
	i = 1;
	while(i < ac)
	{
		ft_list_push_front(&list, av[i]);
		i++;
	}
	return (list);
}
