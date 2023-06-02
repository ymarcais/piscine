/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 08:02:41 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/16 08:48:19 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putnbr(int nb)
{

	int	size;
	char	nombrechar;

	size = 1;
	while (abs(nb) > 10)
	{
	nb /= 10;
	size++;
	}

	nombrechar = nb;
	write(1, nombrechar, size);

}
void	main(void)
{
	ft_putnbr(455);
}
	


