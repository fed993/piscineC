#include "ft_list.h"
#define NULL (void *)0

int		ft_list_size(t_list *begin_list)
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

void	ft_list_clear(t_list **begin_list)
{
	t_list	*previous;
	t_list	*current;

	previous = (*begin_list);
	if(!(previous == NULL))
	{
		current = previous->next;
		free(previous);
		previous = current;
	}
	*begin_list = NULL;
}
