#include "ft_list.h"
#define NULL (void *)0

unsigned int		ft_list_size(t_list *begin_list)
{
	int		counter;
	t_list	*temp;

	counter = 0;
	temp = begin_list;
	if(temp != NULL)
	{
		while((temp != NULL) && (temp->next != NULL))
		{
			temp = temp->next;
			counter++;
		}
		counter++;
	}
	return (counter);
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	if(nbr > ft_list_size(begin_list))
		return (NULL);
	else
	{
		while(i < nbr)
		{
			begin_list = begin_list->next;
			i++;
		}
		return (begin_list);
	}
}
