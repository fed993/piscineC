/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 19:05:06 by fpolyans          #+#    #+#             */
/*   Updated: 2017/07/13 19:14:26 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *c);

int		main(int ac, char **av)
{
	int fd;

	fd = open(av[ac], O_RDWR);
	if (fd == -1)
	{
		ft_pustr("open() failed");
		return(1);
	}
	ft_putnbr(fd);
	return 0;
}
