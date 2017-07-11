/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 00:05:54 by fpolyans          #+#    #+#             */
/*   Updated: 2017/06/29 11:47:48 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	char a;

	a = '0';
	while(a <='9')
	{
		ft_putchar(a);
		a++;
	}
}

int main()
{
	ft_print_numbers();
	return(0);
}
