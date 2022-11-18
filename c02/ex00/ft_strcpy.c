/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:04:48 by suchen            #+#    #+#             */
/*   Updated: 2022/01/19 13:18:24 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char	*dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int	main(void)
{
	char	src1[] = "hello!";
	char	dest1[] = "nothing here at the beginning";
	char	*dest;
	
	printf("before\t%s\n", dest1);
	dest = ft_strcpy(dest1, src1);
	printf("after\t%s\n", dest);
	return 0;
}
*/
