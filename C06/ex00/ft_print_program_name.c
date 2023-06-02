/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 07:42:22 by ymarcais          #+#    #+#             */
/*   Updated: 2022/09/01 16:17:14 by ymarcais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	(void) ac;
	i = 0;
	while (av[0][i] != '\0')
	{
		write (1, &av[0][i], 1);
	i++;
	}
	return (0);
}