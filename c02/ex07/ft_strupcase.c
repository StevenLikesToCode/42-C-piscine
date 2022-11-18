/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:12:31 by suchen            #+#    #+#             */
/*   Updated: 2022/01/20 19:15:12 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str1[] = "1234 HELLO world!";
	char	str2[] = "";

	char	*p1 = str1;
	char	*p2 = str2;
	printf("%s\n", ft_strupcase(p1));	
	printf("%s\n", ft_strupcase(p2));
}
*/
