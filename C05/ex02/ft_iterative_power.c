/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:49:09 by ymarcais          #+#    #+#             */
/*   Updated: 2022/09/01 15:47:03 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;
	int	total;

	a = 1;
	total = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (nb == 0)
		return (0);
	if (power == 0)
		return (1);
	while (a <= power)
	{
		total *= nb;
		a++;
	}	
	if (power < 0)
		return (0);
	return (total);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	b;
	int 	c;
	int	e;

	c = atoi(argv[1]);
	e = atoi(argv[2]);
	b = ft_iterative_power(c, e);
	printf("%d", b);
}

#include <stdio.h>
int	main(void)
{
	int	i;

	i = -15;

	while (i < 13)
	{
		printf("2**%d = %d\n",i, ft_iterative_power(2, i) );
		printf("-2**%d = %d\n",i, ft_iterative_power(-2, i) );
		printf("0**%d = %d\n",i, ft_iterative_power(0, i) );
		i++;
	}
}*/
