/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:49:12 by suchen            #+#    #+#             */
/*   Updated: 2022/02/01 14:59:17 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*str;
	char a[30] = "123456789";
	str = a;

	char	*str1;
	char b[30] = "";
	str1 = b;

	printf("%lu\n", strlen(str));
	printf("%d\n", ft_strlen(str));
	printf("%d\n",ft_strlen(str1));
	return 0;
}
*/
