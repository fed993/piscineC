/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfunction.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 05:30:10 by fpolyans          #+#    #+#             */
/*   Updated: 2017/07/16 06:22:50 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		digit_counter()
{
	
}

char	*ft_itoa(int num)
{
	char 	*str;
	int		tempnb;
	int		digit_counter;

	digit_counter = 0;
	tempnb = nb;
	while(nb > 10)
	{
		num / 10 = num;
		digit_counter++;
	}

	str = (char *)malloc(sizeof(char) * digit_counter);
	nb = tempnb;
	while(nb > 10 )
}
