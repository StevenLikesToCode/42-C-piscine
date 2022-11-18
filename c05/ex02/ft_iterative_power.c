/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:12:14 by suchen            #+#    #+#             */
/*   Updated: 2022/02/01 21:13:51 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		x *= nb;
		power--;
	}
	return (x);
}
/*
#include<stdio.h>
int	main()
{	
	printf("%d\n", ft_iterative_power(-5,1));	
	printf("%d\n", ft_iterative_power(0,0));	
	printf("%d\n", ft_iterative_power(0,5));
	printf("%d\n", ft_iterative_power(0,5));
	printf("%d\n", ft_iterative_power(5,0));
	return (0);
}
*/
