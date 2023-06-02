/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:34:18 by lgirault          #+#    #+#             */
/*   Updated: 2022/08/28 20:57:01 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "header.h"

void	ft_print_digit(char **data, int ind, int space)
{
	int	i;

	i = 0;
	while (data[ind][i])
	{
		if (!('0' <= data[ind][i] && data[ind][i] <= '9'))
			write(1, &data[ind][i], 1);
		i++;
	}
	if (space == 1)
		write(1, " ", 1);
}

void	ft_print_0_999(char *nbr, char **data)
{
	int	len;

	len = ft_strlen(nbr);
	if (nbr[len - 3] != '0')
	{
		ft_print_digit(data, nbr[len - 3] - 48, 1);
		ft_print_digit(data, 28, 1);
	}
	if (nbr[len - 2] >= '2')
	{
		ft_print_digit(data, nbr[len - 2] - 48 + 18, 0);
		if (nbr[len - 1] - 48 != 0)
		{
			write(1, " ", 1);
			ft_print_digit(data, nbr[len - 1] - 48, 0);
		}
	}
	else if (nbr[len - 2] == '1')
		ft_print_digit(data, nbr[len - 1] - 48 + 10, 0);
	else if (nbr[len - 2] == '0' && nbr[len - 1] != '0')
		ft_print_digit(data, nbr[len - 1] - 48, 0);
}

void	more_hundred2(char **data, int size)
{
	int	i;
	int	j;
	int	e;

	e = 3;
	while (--e != 0)
	{
		i = 0;
		while (*data[i] != '\0')
		{
			j = 0;
			while (data[i][j] >= '0' && data[i][j] <= '9')
			{
				if (j == size)
				{
					i--;
					ft_putstr_word(data[i]);
					return ;
				}
				j++;
			}
			i++;
		}
		size--;
	}
}

void	print_all_number(char **data, char **argv, int e)
{
	char	**nbrtable;
	int		i;
	int		size_nbr;
	int		size_tab;

	size_nbr = ft_strlen(argv[e]);
	i = 0;
	nbrtable = nbr_table(argv, e);
	size_tab = size_nbr / 3;
	if (size_nbr % 3 != 0)
		size_tab++;
	while (i < size_tab)
	{
		ft_print_0_999(nbrtable[i], data);
		write(1, " ", 1);
		if (size_nbr > 3)
		{
			more_hundred2(data, size_nbr);
			write(1, " ", 1);
		}
		i++;
		size_nbr = size_nbr - 3;
	}
}
