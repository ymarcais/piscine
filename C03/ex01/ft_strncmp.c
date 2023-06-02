/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 08:42:42 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/29 18:26:05 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int 	main()
{
	char	s1[] = "12";
	char	s2[] = "1237";
	unsigned int n = 5;
	int	a;

	a = ft_strncmp(s1, s2, n);
	printf("%d\n", a);
	printf("%d", strncmp(s1, s2, n));
}*/
