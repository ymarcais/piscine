/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:35:13 by ymarcais          #+#    #+#             */
/*   Updated: 2022/09/01 18:42:46 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	i;
	long int	a;

	i = nb;
	a = 1;
	if (a == 46340)
		return (0);
	if (i <= 0)
		return (0);
	while (a * a <= i)
	{	
		if (a * a == i)
		{
			return (a);
		}
		a++;
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
	b = ft_sqrt(c);
	printf("%d", b);
}
#include <stdio.h>
int	main(void)
{
	int	i;

	i = -5;

	while (i < 101)
	{
		printf("sqrt %d = %d\n",i, ft_sqrt(i) );
		i++;
	}
	i = 2147483647;
	printf("sqrt %d = %d\n",i, ft_sqrt(i) );
} */
