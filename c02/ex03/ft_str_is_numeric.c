/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:27:09 by suchen            #+#    #+#             */
/*   Updated: 2022/01/19 13:41:58 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] < '0' || str[i] > '9')
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
	char	num[] = "0123456789";
	char	nonum[] = "0123456789k";
	char	empty[] = "";
	
	char	*str1, *str2, *str3;
	
	str1 = num;
	str2 = nonum;
	str3 = empty;	
	
	printf("num return\t%d\n", ft_str_is_numeric(str1));
	printf("nonum return\t%d\n", ft_str_is_numeric(str2));
	printf("empty return\t%d\n", ft_str_is_numeric(str3));
	return 0;
}
*/
