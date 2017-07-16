/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_head.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 23:32:36 by fpolyans          #+#    #+#             */
/*   Updated: 2017/07/16 03:28:54 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(int data);

void	ft_list_add_head(t_list **begin_list, int data)
{
	t_list *node;
	node = ft_create_elem(data);
	node->next = *begin_list;
	*begin_list = node;
}

void	ft_list_rm_head(t_list **begin_list)
{
	*begin_list = (**begin_list).next;
}

int		count_parens(char *str)
{
	int i;
	int	paren_counter;

	i = 0;
	paren_counter = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 40)
			paren_counter++;
		i++;
	}
	return (paren_counter);
}

char	*ft_cut(char *str, int strt, int end)
{
	int i;
	char *ret;

	ret = (char*)malloc(sizeof(char) * (end - strt));
	i = 0;
	while (strt < end)
	{
		ret[i] = str[strt];
		strt++;
		i++;
	}
	return (ret);
}

char	*ft_stack_head(char *str, int i, int p_ct, t_list *p_stk, char *out)
{
	i = 0;
	p_ct = 0;
	p_stk = (t_list*)malloc(sizeof(t_list));
	while (str[i] != '\0')
	{
		if (str[i] == 40)
		{
			p_ct++;
			ft_list_add_head(&p_stk, i);
		}
		else if (str[i] == 41)
		{
			out = ft_cut(str, *p_stk->data, i);
			ft_list_rm_head(&p_stk);
			p_ct--;
		}
	}
	return (out);
}

char	*this_function_provides_additional_space(char *str)
{
	int		i;
	int		paren_counter;
	t_list	*paren_stack;
	char	*output;
	
	return (ft_stack_head(str, i, paren_counter, paren_stack, output));
}

int		main(int ac, char **av)
{
	printf("%s", this_function_provides_additional_space(av[1]));
	return (1);
}
