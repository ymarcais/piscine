/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:49:09 by ymarcais          #+#    #+#             */
/*   Updated: 2022/09/01 15:04:40 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	a;

	i = 1;
	a = 1;
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	if (nb > 1)
	{
		while (a <= nb)
		{
			i *= a;
			a++;
		}	
		return (i);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	b;
	int 	c;

	c = atoi(argv[1]);
	b = ft_iterative_factorial(c);
	printf("%d", b);
}*/
