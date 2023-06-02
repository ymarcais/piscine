/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complementaire.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:28:17 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/28 18:38:58 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "header.h"

int	ft_strlen(char *nbr)
{
	int	i;

	i = 0;
	while (nbr[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_word(char *tab)
{
	int	i;

	i = 0;
	while (tab[i] < 'a' || tab[i] > 'z')
	{
		i++;
	}
	while (tab[i] != '\0')
	{
		ft_putchar(tab[i]);
		i++;
	}
}
