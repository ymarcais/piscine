/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaydamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:35:32 by dhaydamo          #+#    #+#             */
/*   Updated: 2022/08/21 23:17:47 by gbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_column(char **board, int *coord, char height)
{
	int	x;
	int	y;

	x = 0;
	y = coord[1];
	while (x < coord[0])
	{
		if (board[x++][y] == height)
			return (0);
	}
	return (1);
}

int	check_line(char **board, int *coord, char height)
{
	int	x;
	int	y;

	x = coord[0];
	y = 0;
	while (y < coord[1])
	{
		if (board[x][y++] == height)
			return (0);
	}
	return (1);
}
