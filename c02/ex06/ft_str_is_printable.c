/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:51:01 by suchen            #+#    #+#             */
/*   Updated: 2022/01/19 18:43:47 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include<stdio.h>
int	main(void)
{
	char	*str1, *str2,*str3;
	
	char	printable[] = "this is a normal one";
	char	unprintable[] = "试试看这个中文吧";
	char	empty[] = "";

	str1 = printable;
	str2 = unprintable;
	str3 = empty;

	printf("printable\t%d\n", ft_str_is_printable(str1));
	printf("unprintable\t%d\n", ft_str_is_printable(str2));	
	printf("empty\t%d\n", ft_str_is_printable(str3));
	
	return 0;
}
*/
