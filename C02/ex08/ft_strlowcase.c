/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:16:48 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/24 15:41:32 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}
/*

#include <stdio.h>

int     main(void)
{
        char a[] = "C EST KOI CE TRQV?"; 
	char *b;

        b = ft_strlowcase(a);
        printf("%s", b);
}*/
