/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:01:10 by ymarcais          #+#    #+#             */
/*   Updated: 2022/09/01 16:08:22 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void) argc;
//	int	c;
//	int	b;

//	c = atoi(argv[1]);
//	b = ft_is_prime(c);
	printf("%d", ft_is_prime(atoi(argv[1])));
}
#include <stdio.h>
int	main(void)
{
	int	i;

	i = -5;

	while (i < 101)
	{
		printf(" %d  %s\n",i, ft_is_prime(i) ? "is prime" : "is not prime" );
		i++;
	}
	i = 2147483647;
	printf(" %d = %d\n",i, ft_is_prime(i) );
}*/
