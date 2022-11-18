/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:00:56 by suchen            #+#    #+#             */
/*   Updated: 2022/01/20 20:02:11 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main()
{
	char	*p1;
	char	*p2;
	char	array1[] = "hello WORLD! 1234";
	char	array2[] = "";

	p1 = array1;
	p2 = array2;
	printf("%s\n",ft_strlowcase(p1));
	printf("%s\n",ft_strlowcase(p2));
}
*/
