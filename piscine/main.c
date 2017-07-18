/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 16:29:32 by fpolyans          #+#    #+#             */
/*   Updated: 2017/07/18 08:35:17 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

#define KB 1024

int		main(int ac, char **av)
{
	int		i;
	int		fd;
	int		ret;
	char	buf[2];
	int		counter;


	i = 1;
	counter = 0;
	if (ac > 1)
	{
		/* read from arguments, in a loop */
		while (av[i])
		{
			fd = open(av[i], O_RDWR);
			while((ret = read(fd, buf, 1)))
			{
				counter += ft_strlen(buf);
				write(fd, &buf, 1);
			}
			printf("%d", counter);
//			close(fd);
//			fd = open(av[i], O_RDWR);
//			parse_map(fd, counter);
			buf[ret] = '\0';
			i++;
		}
	}
	return (1);
}
