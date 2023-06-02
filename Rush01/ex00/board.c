/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaydamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:41:10 by dhaydamo          #+#    #+#             */
/*   Updated: 2022/08/21 23:22:52 by gbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	init_board(char **board, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		board[i] = malloc(sizeof(int) * size);
		if (board[i] == NULL)
		{
			write(1, "Error\n", 6);
			return ;
		}
		i++;
	}
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < 4)
			board[i][j++] = '0';
		board[i][j] = '\0';
		i++;
	}
}

int	is_full(char **board)
{
	int	i;
	int	j;

	i = 0;
	while (board[i])
	{
		j = 0;
		while (board[i][j])
		{
			if (board[i][j++] == '0')
				return (0);
		}
		i++;
	}
	return (1);
}
