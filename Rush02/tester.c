/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:56:12 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/28 20:04:56 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int     ft_check_rows_dict(char *container)
{
        int     i;
        int     rows;

        i = 0;
        rows = 0;
        while (container[i] != '\0')
        {
                if (container[i] == '\n' && container[i + 1] != '\n')
                        rows++;
                i++;
        }
        if (container[i - 1] != '\n')
                rows++;
        return (rows);
}

int	main(void)
{
	int	fd;
	int	checker;
	char    *container = (char*)malloc(10000);

	fd = open("tester_number.dict", O_RDONLY);
        read(fd, container, 10000);
	checker = ft_check_rows_dict(container);
	printf("%d", checker);
}
