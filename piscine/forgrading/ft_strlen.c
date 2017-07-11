/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 18:44:01 by fpolyans          #+#    #+#             */
/*   Updated: 2017/06/30 13:59:38 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	i--;
	return(i);
}

int main(void)
{
	char *ptr;

	ptr = "lolmemes";
	ft_putchar(ft_strlen(ptr) + '0');
	return(0);
}
