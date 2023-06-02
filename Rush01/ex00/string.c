/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaydamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:38:29 by dhaydamo          #+#    #+#             */
/*   Updated: 2022/08/21 23:38:43 by dhaydamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*rm_spaces(char *str)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	res = malloc(sizeof(char) * 37);
	if (res == NULL)
	{
		write(1, "Error\n", 6);
		return (res);
	}
	while (str[i] != 0)
	{
		j = 0;
		if (str[i] >= '0' && str[i] <= '9')
		{
			res[j++] = str[i];
			i++;
		}
	}
	res[j] = 0;
	return (res);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	affichage(char **board, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			ft_putchar(board[i][j]);
			if (j < size - 1)
				ft_putchar(' ');
			j++;
		}
		i++;
		j = 0;
		ft_putchar('\n');
	}
}
