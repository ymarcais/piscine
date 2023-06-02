/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:42:50 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/26 09:44:14 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*	





#include <stdio.h>

int	main(void)
{
	char s1[] = "123";
	char s2[] = "12543";
	int a;

	a = ft_strcmp(s1, s2);
	printf("%d", a);
	//return (0);
}*/