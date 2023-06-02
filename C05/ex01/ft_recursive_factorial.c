/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:49:09 by ymarcais          #+#    #+#             */
/*   Updated: 2022/09/01 15:59:51 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		total = nb * ft_recursive_factorial (nb - 1);
		return (total);
	}
	return (0);
}
/*
#include <stdio.h>

#include <stdlib.h>

int	main (int argc, char *argv[])
{
	int	b;
	int 	c;

	c = atoi(argv[1]);
	b = ft_recursive_factorial(c);
	printf("%d", b);
}
int	main(void)
{
	int	i;

	i = -15;

	while (i < 13)
	{
		printf("%d! = %d\n",i, ft_recursive_factorial(i) );
		i++;
	}
}*/
