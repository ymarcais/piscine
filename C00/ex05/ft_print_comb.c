/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 07:09:21 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/15 10:30:07 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_fun(char a, char b, char c)
{			
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a != 55)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	while (a != 56)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				write_fun(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
