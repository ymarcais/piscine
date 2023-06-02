/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaydamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:37:19 by dhaydamo          #+#    #+#             */
/*   Updated: 2022/08/21 23:36:33 by dhaydamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	check_line(char **board, int *coord, char height);

int	check_column(char **board, int *coord, char height);

int	check_view_up(char **board, char *views, int *coord)
{
	int		x;
	int		y;
	int		acc;
	char	max;

	x = 0;
	y = coord[1];
	max = 0;
	acc = 0;
	while (x < coord[0] && board[x][y])
	{
		if (board[x][y] > max)
		{
			acc++;
			max = board[x++][y];
		}
		else
			x++;
	}
	if (x < (ft_strlen(views) - 1) / 4)
		return (acc <= views[coord[1]]);
	else
		return (acc == views[coord[1]]);
}

int	check_view_down(char **board, char *views, int *coord)
{
	int		x;
	int		y;
	int		acc;
	char	max;

	x = coord[0];
	y = coord[1];
	max = 0;
	acc = 0;
	while (x >= 0 && board[x][y])
	{
		if (board[x][y] > max)
		{
			acc++;
			max = board[x--][y];
		}
		else
			x--;
	}
	if (x < (ft_strlen(views) - 1) / 4)
		return (acc <= views[coord[1] + (ft_strlen(views) - 1) / 4]);
	else
		return (acc == views[coord[1] + (ft_strlen(views) - 1) / 4]);
}

int	check_view_left(char **board, char *views, int *coord)
{
	int		x;
	int		y;
	int		acc;
	char	max;

	x = coord[0];
	y = 0;
	max = 0;
	acc = 0;
	while (y < coord[1] && board[x][y])
	{
		if (board[x][y] > max)
		{
			acc++;
			max = board[x][y++];
		}
		else
			y++;
	}
	if (x < (ft_strlen(views)- 1) / 4)
		return (acc <= views[coord[1] + (ft_strlen(views) - 1) / 2]);
	else
		return (acc == views[coord[1] + (ft_strlen(views) - 1) / 2]);
}

int	check_view_right(char **board, char *views, int *coord)
{
	int		x;
	int		y;
	int		acc;
	char	max;

	x = coord[0];
	y = coord[1];
	max = 0;
	acc = 0;
	while (y >= 0 && board[x][y])
	{
		if (board[x][y] > max)
		{
			acc++;
			max = board[x][y--];
		}
		else
			y--;
	}
	if (x < (ft_strlen(views) - 1) / 4)
		return (acc <= views[(coord[1] + ((ft_strlen(views) - 1) / 4) * 3)]);
	else
		return (acc == views[(coord[1] + ((ft_strlen(views) - 1) / 4) * 3)]);
}

int	check_conditions(char **board, char *views, int *coord, char c)
{
	if (check_view_right(board, views, coord))
		if (check_view_left(board, views, coord))
			if (check_view_up(board, views, coord))
				if (check_view_down(board, views, coord))
					if (check_line(board, coord, c))
						if (check_column(board, coord, c))
							return (1);
	return (0);
}
