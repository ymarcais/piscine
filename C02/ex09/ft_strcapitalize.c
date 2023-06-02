/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:41:45 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/25 14:03:47 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*minuscule(char *str)
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

char	*ft_strcapitalize(char *str)
{
	int	i;

	minuscule(str);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122))
		{
			if (!(str[i - 1] >= 97 && str[i - 1] <= 122) && !(str[i - 1] >= 65
					&& str[i - 1] <= 90))
			{
				if (!(str[i - 1] >= 48 && str[i - 1] <= 57))
				{
					str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

 char	*ft_strcapitalize(char *src);

void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "salut, comment tu vas ? 42mots tquarante-deux; cinquante+et+un ";
//	ft_putstr("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un:");
	ft_putstr("\n");
	ft_putstr(ft_strcapitalize(c));
	//ft_putstr(":");
	//ft_putstr(c);
}
*/
