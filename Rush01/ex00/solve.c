/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaydamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:27:54 by dhaydamo          #+#    #+#             */
/*   Updated: 2022/08/21 23:33:23 by dhaydamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	check_conditions(char **board, char *views, int *coord, char c);

int	is_full(char **board);

int	*increase(int *coord)
{
	coord[1]++;
	return (coord);
}

int	solve(char **board, char *views, int *coord)
{
	if (coord[1] >= ft_strlen(views) / 4)
	{
		coord[1] = 0;
		coord[0]++;
	}
	board[coord[0]][coord[1]] = 1 + 48;
	while (board[coord[0]][coord[1]] <= ft_strlen(views) / 4 + 48)
	{
		if (check_conditions(board, views, coord, board[coord[0]][coord[1]]))
		{
			if (!is_full(board))
			{
				if (solve(board, views, increase(coord)))
					return (1);
			}
			else
				return (1);
		}
		if (board[coord[0]][coord[1]] == ft_strlen(views) / 4 + 48)
			return (0);
		board[coord[0]][coord[1]]++;
	}
	return (0);
}
