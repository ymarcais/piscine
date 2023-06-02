/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 08:52:10 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/24 13:22:02 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*

#include <stdio.h>


int	main(void)
{
	char dest[] = "Toto:";
	char src[] = "a la plage";
	char *word;

	word = ft_strcpy(dest, src);
	printf("%s\n", word);

	return 0;
}*/
