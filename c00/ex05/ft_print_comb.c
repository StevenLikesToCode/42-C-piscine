#include<unistd.h>

void for_write(char e, char f,char g)
{
	write(1, &e, 1);
	write(1, &f, 1);
        write(1, &g, 1);
	if (e != '7' || f != '8' || g != 9)
	{
		write(1, ", ", 2);
	}
}

void ft_print_comb(void)
{
	char	a = '0';
	char	b;
	char	c;
	while (a <= '7')
	{
		b = a + 1;		
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				for_write(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int	main()
{
	ft_print_comb();
	return 0;
}
*/
