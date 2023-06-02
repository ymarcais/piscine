/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:17:55 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/26 09:56:31 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	len( char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
	str++;
	i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	lendest;
	int	i;

	lendest = len(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (dest);
}
/*
int  main()
{
	char dest[100] = "122";
	char src[] = "123";
	char    *a;

	a = ft_strcat(dest, src);
	printf("%s", a);
}*/
