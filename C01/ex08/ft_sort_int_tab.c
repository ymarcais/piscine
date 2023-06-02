/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:48:17 by ymarcais          #+#    #+#             */
/*   Updated: 2022/08/17 07:43:24 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < size)
	{
		tmp = tab[i];
		j = i -1;
		while (j >= 0 && tab[j] > tmp)
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = tmp;
		i++;
	}
}
