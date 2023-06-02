/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contrlnb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 08:19:51 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/28 18:56:11 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "header.h"

int	contrl(char *str, int i)
{
	int	ret;

	while (str[i] == '\n')
		i++;
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (str[i] == ' ')
		i++;
	if (str[i] != ':')
		return (0);
	else
		i++;
	ret = contrl2(str, i);
	return (ret);
}

int	contrl2(char *str, int i)
{
	while (str[i] == ' ')
		i++;
	if (!(str[i] >= ' ' && str[i] <= '~'))
		return (0);
	while (str[i] >= ' ' && str[i] <= '~')
		i++;
	if (str[i] != '\n')
		return (0);
	else
		i++;
	if (str[i] != '\0')
		return (contrl(str, i));
	else
		return (1);
}
