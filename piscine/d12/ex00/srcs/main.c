/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 19:05:06 by fpolyans          #+#    #+#             */
/*   Updated: 2017/07/13 21:59:50 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define MB_SIZE 1048576
#define KB_SIZE 1024

void	ft_putchar(char c);
void	ft_putstr(char *c);
void	ft_putnbr(int i);

int		main(int ac, char **av)
{
	int		fd;
	int		buf_loc;
	char	buffer[(KB_SIZE + 1)];

	fd = open(av[ac - 1], O_RDWR);
	if (ac < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	else
	{
		while ((buf_loc = read(fd, buffer, KB_SIZE)))
		{
			buffer[buf_loc] = '\0';
			ft_putstr(buffer);
		}
	}
	return (0);
}
