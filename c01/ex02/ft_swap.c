/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:30:50 by suchen            #+#    #+#             */
/*   Updated: 2022/01/14 20:38:02 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	s;

	s = *a;
	*a = *b;
	*b = s;
}
/*
int	main(void)
{
	int	j;
	int	k;
	int	*x;
	int	*y;

	j = 1;
	k = 2;
	x = &j;
	y = &k;
	printf("before swap%u%u\n", *x, *y);
	ft_swap(x, y);
	printf("after swap%u%u\n", *x, *y);
	return (0);
}
*/
