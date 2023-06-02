/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:30:30 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/24 13:50:27 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*

#include<stdio.h>
int main(void)
{
	char dest[] = "tous les autres trucs seront effaces";
	char src[] = "Text a cop"; 
	char *word;

	word = ft_strncpy(dest, src, 15);
	printf("%s", word);
}*/
