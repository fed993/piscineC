/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 05:23:04 by fpolyans          #+#    #+#             */
/*   Updated: 2017/07/11 06:13:52 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     fstrlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	return (i);
}

int     count_spaces(char *str)
{ 
	int i;
	int j;
	int length;

	i = 0;
	j = 0;
	length = fstrlen(str);
	while (i < length)
	{
		j = (str[i] == ' ') ? j + 1 : j;
		i++;
	}
	return (j);
}

char    *wrt_str_at_indx(int length, int indx1, int indx2, char *origin_str)
{
	char *str;
	int i;

	str = malloc(length);
	i = 0;
	indx2++;
	while (indx2 < indx1)
	{
		str[i] = origin_str[indx2];
		i++;
		indx2++;
	}
	return (str);
}

char    **ft_split_whitespace(char *str)
{
	int     i;
	int     p_indx;
	int     j;
	char    **strcpy;

	i = 0;
	p_indx = -1;
	j = 0;
	strcpy = malloc(sizeof(char *) * count_spaces(str) + 3);
	while (str[i] != '\0')
	{
		if (str[i] == 32 || str[i] == 11 || str[i] == 12 || str[i] == 0)
		{
			strcpy[j] = malloc(sizeof(char) * (i - p_indx) - 1);
			strcpy[j] = wrt_str_at_indx(((i - p_indx) - 1), i, p_indx, str);
			p_indx = i;
			j++;
		}
		i++;
	}
	j++;
	strcpy[j] = malloc(sizeof(char) * 1);
	strcpy[j][0] = '0';
	return (strcpy);
}


int main() {
	int i;
	char **lolmemes;

	i = 0;
	lolmemes = malloc(sizeof(char **) * 4);
	lolmemes = ft_split_whitespace("this is sample text");
	while (lolmemes[i][0] != '\0')
	{
		printf("%s", lolmemes[i]);
		i++;
	}
	return 0;
}
