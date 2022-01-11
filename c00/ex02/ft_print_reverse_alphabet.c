#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char alphabet = 'z';
	while (alphabet >= 'a')
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
	write(1, "\n",1);
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return	0;
}
*/
