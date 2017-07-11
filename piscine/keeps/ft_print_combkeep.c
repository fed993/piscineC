/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 12:31:29 by fpolyans          #+#    #+#             */
/*   Updated: 2017/06/29 14:09:41 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char n[3];

	n[0] = '0';
	while (n[0] <= '9')
	{
		n[1] = n[0] + 1;
		while (n[1] <= '9')
		{
			n[2] = n[1] + 1;
			while (n[2] <= '9')
			{
				if (n[0] != n[1] && n[0] != n[2] && n[1] != n[2])
				{
					ft_putchar(n[0]);
					ft_putchar(n[1]);
					ft_putchar(n[2]);
					ft_putchar(',');
					ft_putchar(' ');
				}
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return(0);
}
