#include<unistd.h>

void	for_write(char a)
{
	write(1, &a, 1);
}

void	change(int x)
{
	char	num1 = (x / 10) + 48;
	char	num2 = (x % 10) + 48;
	
	for_write(num1);
	for_write(num2);
}

void	ft_print_comb2(void)
{
	int	a = 0;
	int	b = 0;
	while(a < 99)
	{
		while(b < 99)	
		{
			b++;
			change(a);
			for_write(' ');
			change(b);
			if((a != 98)||(b != 99))
			{
				for_write(',');
				for_write(' ');
			}
		}
		a++;
		b = a;
	}
}

/*
int	main()
{
	ft_print_comb2();
	return (0);
}
*/
