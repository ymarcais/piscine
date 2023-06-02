#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*toto( int s, int f)
{
	int	size;
	int	i;
	int 	*tab;
	int	z;

	size = f - s;
	printf("%d", size);

	i = 0;
	tab = malloc(sizeof(*tab) *size);
	while( i < size)
	{
		tab[i] = s;
		s++;
		i++;
	}
	return (tab);
}

int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	*c;
	int	d;

	a = atoi(av[1]);
	b = atoi(av[2]);
	c = toto(a, b);
	printf("%d", c[1]);
	free(c);
}
