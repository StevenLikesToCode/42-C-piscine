/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:22:54 by suchen            #+#    #+#             */
/*   Updated: 2022/01/19 13:25:27 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{	
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
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
	char alpha[] = "asngbJKJAF";
	char *str1;
	str1 = alpha;
	
	char other[] = "awdaf123";
	char *str2;
	str2 = other;
	
	char empty[] = "";
	char *str3;
	str3 = empty;

	printf("alpha%d\n", ft_str_is_alpha(str1));
	printf("other%d\n", ft_str_is_alpha(str2));
	printf("empty%d\n", ft_str_is_alpha(str3));
	
	return 0;
}
*/
