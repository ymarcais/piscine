/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:24:24 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/15 10:32:23 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ecrire(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if ((a != 57) || (b != 56) || (c != 57) || (d != 57))
	{
		write(1, ", ", 2);
	}
}

void	boucle(char a, char b, char c, char d)
{
	a = 48;
	while (a < 58)
	{				
		b = 48;
		while (b < 58)
		{
			c = 48;
			while (c < 58)
			{
				d = b + 1;
				while (d < 58)
				{
					ecrire(a, b, c, d);
					d++;
				}
				c++;
			}	
			b++;
		}	
		a++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	c;
	char	d;
	char	b;

	boucle(a, b, c, d);
}
