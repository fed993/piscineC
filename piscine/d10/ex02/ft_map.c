/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 02:51:12 by fpolyans          #+#    #+#             */
/*   Updated: 2017/07/11 04:44:05 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, void (*f)(int))
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
