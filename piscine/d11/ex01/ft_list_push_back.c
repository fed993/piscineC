#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list* ft_create_elem(void* data)
{
		t_list* item = malloc(sizeof(t_list));
		item->next = NULL;
		item->data = data;
		return (item);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
		t_list	*link;

		link = ft_create_elem(data);
		while(((*begin_list)->next) != 0)
		{
				(*begin_list) = (*begin_list)->next;
		}
		(*begin_list)->next = link;
		link->data = data;
}

void crap_a_list(t_list* list)
{
		for (; list != 0; list = list->next)
				printf("%s,", (char*)list->data);
		printf("\n");
}

int main()
{
		t_list	*list;
		void	*data;

		list = ft_create_elem(data);
		ft_list_push_back(&list, "asdf");
		crap_a_list(list);
		ft_list_push_back(&list, "qwer");
		ft_list_push_back(&list, "zxcv");
		crap_a_list(list);
		list = 0;
		ft_list_push_back(&list, "uiop");
		ft_list_push_back(&list, "hjkl");
		crap_a_list(list);
}
