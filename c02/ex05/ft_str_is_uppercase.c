/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:44:26 by suchen            #+#    #+#             */
/*   Updated: 2022/01/19 13:46:31 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char	*str1, *str2, *str3;
	
	char	uppercase[] = "JLAEIFJLAIBNVASD";
	char	others[] = "ASDNJAsdij1";
	char	empty[] = "";
	
	str1 = uppercase;
	str2 = others;
	str3 = empty;

	printf("uppercase return\t%d\n", ft_str_is_uppercase(str1));
	printf("others return\t%d\n", ft_str_is_uppercase(str2));
	printf("empty return\t%d\n", ft_str_is_uppercase(str3));

	return 0;
}
*/
