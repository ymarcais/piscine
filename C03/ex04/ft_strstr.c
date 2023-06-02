/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:05:03 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/29 19:22:19 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		while ((to_find[j] == str[i + j]) && (str[i + j] != '\0'))
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*i;
	char	str[] = "to";
	char	to_find[] = "toto";

	i = ft_strstr(str, to_find);
	if (i)
		printf("%s\n", i);
}*/
