/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:00:16 by ymarcais          #+#    #+#             */
/*   Updated: 2022/09/01 15:50:51 by ymarcais         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

/*
int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 2147483647)
		return (2147483647);
	while (i <= (nb / (i)) || nb % 2 == 0)
	{	
		i = 2;
		while (i <= (nb / i))
		{
			if (nb % i == 0)
				nb++;
		i++;
		}
	}
	return (nb);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void) argc;
//	int	c;
//	int	b;

//	c = atoi(argv[1]);
//	b = ft_is_prime(c);
	printf("%d", ft_find_next_prime(atoi(argv[1])));
}
#include <stdio.h>
int	main(void)
{
	int	i;

	i = -5;

	while (i < 101)
	{
		printf(" %d : %d\n",i, ft_find_next_prime(i) );
		i++;
	}
	i = 2147483647;
	printf(" %d = %d\n",i, ft_find_next_prime(i) );
}*/
