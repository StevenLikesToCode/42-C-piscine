/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:36:19 by suchen            #+#    #+#             */
/*   Updated: 2022/01/19 13:38:44 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	
	char	lowercase[] = "asdjhgsdkgjqlieuvnzxvnjahfk";
	char	others[] = "fadkughaAKA";
	char	empty[] = "";
	
	str1 = lowercase;
	str2 = others;
	str3 = empty;

	printf("lowercase return\t%d\n", ft_str_is_lowercase(str1));
	printf("others return\t%d\n", ft_str_is_lowercase(str2));
	printf("empty return\t%d\n", ft_str_is_lowercase(str3));

	return 0;
}
*/
