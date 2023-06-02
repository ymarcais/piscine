#include <unistd.h>

void	write_number(int i)
{
	if (i > 9)
		write_number( i/10);
	write (1, &"0123456789"[ i% 10], 1);
}

void	hello()
{
	int	i;

	i = 0;
	while( i <=100)
	{
		if ( i % 3 == 0)
			write (1, "hello", 5);
		if ( i % 5 == 0)
			write (1, "toto", 4);
		if ( !(i % 3 == 0 || i % 5 == 0))
			write_number (i);
		write(1, "\n", 1);	
		i++;
	}
}

int main (void)
{
	hello();
}
	
