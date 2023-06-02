/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 07:49:21 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/31 14:38:05 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	positif(int nb, int i, int c, int a)
{
	while (c >= 10)
	{
		c /= 10;
		a *= 10;
		i++;
	}
	while (i >= 0)
	{
		c = nb / a;
		c %= 10;
		c = c + 48;
		write(1, &c, 1);
		a /= 10;
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	int		c;
	int		a;

	i = 0;
	a = 1;
	if (nb < -2147483647)
	{	
		write(1, "-2", 2);
		nb = 147483648;
	}	
	c = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= (-1);
		c = nb;
	}
	positif(nb, i, c, a);
}
/*
int	main(void)
{
	ft_putnbr(0);
	return(0);
}*/
