#include<unistd.h>

void	putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int x)
{
	if(x == -2147483648)
	{
		putchar('-');		
		putchar('2');
		x = 147483648;
	}
	if(x < 0)
	{	
		putchar('-');
		x *= -1;	
	}
	if(x < 10)
	{
		putchar(x + 48);
	}
	else
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
}

/*
int	main()
{
	ft_putnbr(-2147483648);
	ft_putnbr(-1);	
	ft_putnbr(0);
	ft_putnbr(12345);
	return (0);
}
*/
