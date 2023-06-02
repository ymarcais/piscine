/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_in_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:38:44 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/28 20:52:49 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "header.h"

void	cut3(char *str, char **tab)
{
	int	mod;
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str) / 3;
	mod = ft_strlen(str) % 3;
	if (mod > 0)
		size ++;
	while (i < 3 - mod)
	{
		tab[0][i] = '0';
		i++;
	}
	i = ft_strlen(str) - 1;
	cut3_part2(str, tab, i, size);
}

void	cut3_part2(char *str, char **tab, int i, int size)
{
	while (i > -1)
	{
		tab[size - 1][2] = str[i];
		if (i - 1 < 0)
			break ;
		tab[size - 1][1] = str[i - 1];
		if (i - 2 < 0)
			break ;
		tab[size - 1][0] = str[i - 2];
		i -= 3;
		size--;
	}
}

char	**nbr_table(char **argv, int e)
{
	char	*str;
	char	**tab;
	int		i;

	i = 0;
	str = argv[e];
	tab = (char **)malloc(sizeof(char *) * (ft_strlen(str) / 3));
	while (i < ft_strlen(str) / 3)
	{
		tab[i] = (char *)malloc(sizeof(char) * 3);
		i++;
	}
	if (ft_strlen(str) % 3 != 0)
		tab[i] = (char *)malloc(sizeof(char) * 3);
	cut3(str, tab);
	return (tab);
}
