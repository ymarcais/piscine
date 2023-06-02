/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:35:20 by ymarcais          #+#    #+#             */
/*   Updated: 2022/09/01 15:43:37 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
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
	b = ft_fibonacci(c);
	printf("%d", b);
}
#include <stdio.h>
int	main(void)
{
	int	i;

	i = -5;

	while (i < 13)
	{
		printf("index %d = %d\n",i, ft_fibonacci(i) );
		i++;
	}
}*/
