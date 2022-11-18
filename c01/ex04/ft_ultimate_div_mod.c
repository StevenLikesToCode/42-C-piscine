/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:45:48 by suchen            #+#    #+#             */
/*   Updated: 2022/01/14 20:46:47 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	if (*b != 0)
	{
		x = (*a) / (*b);
		y = (*a) % (*b);
		*a = x;
		*b = y;
	}
}
/*
#include<stdio.h>

int	main(void)
{
	int	x = 10;
	int	y = 3;
	int	*j = &x;
	int	*k = &y;
	ft_ultimate_div_mod(j, k);
	printf("j=%d\nk=%d\n",*j,*k);
	return (0);
}
*/
