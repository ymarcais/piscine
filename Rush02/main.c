/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:04:29 by lgirault          #+#    #+#             */
/*   Updated: 2022/08/28 22:07:58 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int	main2(int str, char **arv, int e, char *container);

int	main(int argc, char *argv[])
{
	int		e;
	char	*container;

	if (argc < 1 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	e = 1;
	container = (char *)malloc(1000);
	main2(argc, argv, e, container);
}

int	main2(int argc, char **argv, int e, char *container)
{
	int		fd;
	int		sz;
	char	**data;

	data = (char **)malloc(sizeof(char *) * (ft_dict_row(container) + 1));
	if (data == NULL || container == NULL)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (argc == 3)
	{
		e = 2;
		fd = open(argv[1], O_RDONLY);
	}
	else
		fd = open("numbers.dict", O_RDONLY);
	sz = read(fd, container, 1000);
	if (check_dict(container) == 0)
		write(1, "Dict Error\n", 11);
	if (fd > 0 || sz > 0)
		ft_data_maker(data, container, ft_dict_row(container));
	if (argc > 0)
		print_all_number(data, argv, e);
	return (0);
}

int	ft_dict_row(char *container)
{
	int	i;
	int	rows;

	i = 0;
	rows = 0;
	while (container[i] != '\0')
	{
		if (container[i] == '\n' && container[i + 1] != '\n')
			rows++;
		i++;
	}
	if (container[i - 1] != '\n')
		rows++;
	return (rows);
}

int	check_dict(char *container)
{
	int	i;
	int	error;

	i = 0;
	error = contrl(container, i);
	return (error);
}
