/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 21:06:06 by fpolyans          #+#    #+#             */
/*   Updated: 2017/07/05 21:48:55 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);

int		main()
{
	char	*str1;
	char	*str2;

	str1 = "lolememes";
	str2 = "lolememes";
	printf("\n%d\n", ft_strcmp(str1, str2));
	printf("\n%d\n", ft_strcmp(str2, str1));
}
