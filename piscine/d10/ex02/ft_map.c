/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 02:51:12 by fpolyans          #+#    #+#             */
/*   Updated: 2017/07/11 22:39:13 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*out;

	i = 0;
	out = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		out = f(tab[i]);
		i++;
	}
	return (out);
}
