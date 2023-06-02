/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveerara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:21:44 by nveerara          #+#    #+#             */
/*   Updated: 2022/08/14 12:18:06 by nveerara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	content(char *del, int j, int x)
{
	if (j == 0)
		ft_putchar(del[0]);
	else if (0 < j && j < x - 1)
		ft_putchar(del[1]);
	else if (j == x - 1)
		ft_putchar(del[2]);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	if (x < 0 || y < 0)
		return ;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (i == 0)
				content("/*\\", j, x);
			else if (i < y - 1)
				content("* *", j, x);
			else
				content("\\*/", j, x);
			j++;
		}
		ft_putchar('\n');
		i++;
	}	
}
