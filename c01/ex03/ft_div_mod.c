/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:38:54 by suchen            #+#    #+#             */
/*   Updated: 2022/01/14 20:40:39 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include<stdio.h>
int	main(void)
{
	int	x = 5;
	int	y = 2;
	int	*d = &x;
	int	*m = &y;
	ft_div_mod(x, y, d, m);
	printf("div is%i\nmod is%i\n", *d, *m);
	return 0;
}
*/
