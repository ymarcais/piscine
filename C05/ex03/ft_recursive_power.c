/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 09:52:47 by ymarcais          #+#    #+#             */
/*   Updated: 2022/09/01 15:57:07 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
		return (nb * ft_recursive_power(nb, power -1));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	b;
	int 	c;
	int	e;
	(void) argc;

	c = atoi(argv[1]);
	e = atoi(argv[2]);
	b = ft_recursive_power(c, e);
	printf("%d", b);
}
#include <stdio.h>
int	main(void)
{
	int	i;

	i = -5;

	while (i < 13)
	{
		printf("2**%d = %d\n",i, ft_recursive_power(2, i) );
		printf("-2**%d = %d\n",i, ft_recursive_power(-2, i) );
		printf("0**%d = %d\n",i, ft_recursive_power(0, i) );
		i++;
	}
} */
