/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rows_in_dict.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:06:31 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/28 21:10:07 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "header.h"

int	ft_check_rows_dict(char *container)
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
