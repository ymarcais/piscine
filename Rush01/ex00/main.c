/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaydamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:52:47 by dhaydamo          #+#    #+#             */
/*   Updated: 2022/08/21 23:08:12 by dhaydamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);

int		newstring(char *str);

char	*rm_spaces(char *str);

void	init_board(char **board, int size);

int		solve(char **board, char *views, int *coord);

void	affichage(char **board, int size);

int		check_conditions(char **board, char *views, int *coord, char c);

int	main(int argc, char *argv[])
{
	int		size;
	char	*views;
	int		*coord;
	char	**board;

	(void) argc;
	if (argc != 2 || !newstring(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	views = rm_spaces(argv[1]);
	size = ft_strlen(views) / 4;
	board = malloc(sizeof(char *) * size);
	coord = malloc(sizeof(int) * 2);
	if (board == NULL || coord == NULL)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	coord[0] = 0;
	coord[1] = 0;
	init_board(board, size);
	solve(board, views, coord);
	affichage(board, size);
}
