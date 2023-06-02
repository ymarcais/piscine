/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:45:40 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/28 18:19:45 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

char	*ft_create_buffer_to_dict(int fd, int *sz)
{
	char	*container;
	char	*temp_container;
	int		i;

	temp_container = (char *)malloc(sizeof(char) * 10000);
	*sz = read(fd, temp_container, 10000);
	i = 0;
	while (temp_container[i])
		i++;
	container = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (temp_container[i])
	{
		container[i] = temp_container[i];
		i++;
	}
	container[i] = '\0';
	free (temp_container);
	return (container);
}

int	main(void)
{
	char	*container;
	int		fd;
	int		sz;

	fd = open("numbers.dict", O_RDONLY);
	container = ft_create_buffer_to_dict(fd, &sz);
	if (fd > 0 && sz > 0)
		printf("%s", container);
	free(container);
	return (0);
}
