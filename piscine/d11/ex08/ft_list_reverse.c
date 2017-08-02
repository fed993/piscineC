#include "ft_list.h"
#define NULL (void *)0

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*current_link;
	t_list	*next_link;
	t_list	*prev_link;

	current_link = *begin_list;
	next_link = NULL;
	prev_link = NULL;
	while(current_link != NULL)
	{
		next_link = current_link->next;
		current_link-> next = prev_link;
		prev_link = current_link;
		current_link = next_link;
	}
	*begin_list = prev_link;
}
