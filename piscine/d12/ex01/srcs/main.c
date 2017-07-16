/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 19:05:06 by fpolyans          #+#    #+#             */
/*   Updated: 2017/07/13 22:40:38 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define MB_SIZE 1048576
#define KB_SIZE 1024

void	ft_putchar(char c);
void	ft_putstr(char *c);

void	read_print_file(int ac, char **av)
{
	int		fd;
	int		buf_loc;
	char	buffer[(KB_SIZE + 1)];

	fd = open(av[ac - 1], O_RDWR);
	if (ac < 2)
	{
		ft_putstr("File name missing.\n");
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
	}
	else
	{
		while ((buf_loc = read(fd, buffer, KB_SIZE)))
		{
			buffer[buf_loc] = '\0';
			ft_putstr(buffer);
		}
	}
}

int		main(int ac, char **av)
{
	read_print_file(ac, av);

	
	return (0);
}
