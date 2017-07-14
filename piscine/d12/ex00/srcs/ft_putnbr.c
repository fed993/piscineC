/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 05:57:40 by fpolyans          #+#    #+#             */
/*   Updated: 2017/07/13 19:13:46 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_determine_int_length(int nb)
{
	int digt_cnt;

	digt_cnt = 1;
	nb = (nb < 0) ? -nb : nb;
	while (nb > 10)
	{
		nb = (nb / 10);
		digt_cnt++;
	}
	return (digt_cnt);
}

void	ft_putstrl(char *str, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int		temp_nb;
	int		array_index;
	char	billion_digit;
	char	array[ft_determine_int_length(nb)];

	temp_nb = nb;
	if (temp_nb == -2147483648)
		ft_putstrl("-2147483648", 11);
	else
	{
		array_index = ft_determine_int_length(temp_nb) - 1;
		temp_nb = (nb < 0) ? (0 - temp_nb) : temp_nb;
		while (temp_nb > 0)
		{
			array[array_index] = ((temp_nb % 10) + '0');
			array_index--;
			temp_nb = temp_nb / 10;
		}
		if (nb < 0)
			ft_putchar('-');
		ft_putstrl(array, ft_determine_int_length(nb));
	}
}
