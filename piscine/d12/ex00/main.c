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

void	ft_putchar(char c);
void	ft_putstr(char *c);
void	ft_putnbr(int i);

#define MB_BUF_SIZE 1048576
#define KB_BUF_SIZE 1024

int		main(int ac, char **av)
{
	int		fd;
	int		buf_loc;
	char	buffer[((KB_BUF_SIZE) * 4) + 1];

	fd = open(av[ac - 1], O_RDWR);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return(1);
	}
	buf_loc = read(fd, buffer, KB_BUF_SIZE); 
	while (buf_loc)
	{
		buffer[buf_loc] = '\0';
		ft_putstr(buffer);
		buf_loc = read(fd, buffer, KB_BUF_SIZE);
	}
	if (buf_loc == -1)
	{
		ft_putstr("read() failed\n");
		return (1);
	}
	return 0;
}
