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
		ft_putstr("File name missing.\n");
	if (ac > 2)
		ft_putstr("Too many arguments.\n");	
	else
	{
		if (fd == -1)
		{
			ft_putstr("open() failed\n");
			return(1);
		}
		buf_loc = read(fd, buffer, KB_SIZE); 
		while (buf_loc)
		{
			buffer[buf_loc] = '\0';
			ft_putstr(buffer);
			buf_loc = read(fd, buffer, KB_SIZE);
		}
		if (buf_loc == -1)
		{
			ft_putstr("read() failed\n");
			return (1);
		}
		return 0;
	}
	return 0;
}
