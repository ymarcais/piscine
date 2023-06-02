/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:29:43 by lgirault          #+#    #+#             */
/*   Updated: 2022/08/28 21:45:45 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "header.h"

int	ft_mid(char *container, int pos, int checker)
{
	int	l;

	if (checker == 1)
	{
		l = pos;
		while (container[l] != ' ' && container[l] != ':')
			l++;
	}
	else
	{
		l = pos;
		while (container[l] == ' ' || container[l] == ':')
			l++;
	}
	return (l);
}

void	ft_insert_data(char **data, char *container, int beg, int pos)
{
	int	m;
	int	j;
	int	mid;

	mid = ft_mid(container, beg, 1);
	m = beg;
	j = 0;
	while (m < mid)
	{
		data[pos][j] = container[m];
		j++;
		m++;
	}
	m = ft_mid(container, mid, 0);
	while (container[m] != '\n')
	{
		data[pos][j] = container[m];
		m++;
		j++;
	}
	data[pos][j] = '\0';
}

int	ft_bin(char *container, int pos)
{
	int	k;
	int	garbage;

	k = pos;
	garbage = 0;
	while (container[k] != '\n')
	{
		if (container[k] == ' ' || container[k] == ':')
			garbage++;
		k++;
	}
	return (garbage);
}

void	ft_initialization(char **data, char *container, int len)
{
	int	i;
	int	j;
	int	beg;
	int	size;

	i = 0;
	j = 0;
	while (i < len && container[j] != '\0')
	{
		if (container[j] == '\n')
		{
			j++;
			continue;
		}
		beg = j;
		while (container[j] != '\n')
			j++;
		size = j - beg - ft_bin(container, beg);
		data[i] = (char *)malloc(size + 1);
		j++;
		i++;
	}
}

void	ft_data_maker(char **data, char *container, int len)
{
	int	i;
	int	j;
	int	beg;

	i = 0;
	j = 0;
	ft_initialization(data, container, len);
	while (i < len && container[j] != '\0')
	{
		if (container[j] == '\n')
		{
			j++;
			continue ;
		}
		beg = j;
		while (container[j] != '\n')
			j++;
		ft_insert_data(data, container, beg, i);
		i++;
		j++;
	}
	data[i] = '\0';
}
