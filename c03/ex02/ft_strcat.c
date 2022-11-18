/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:06:47 by suchen            #+#    #+#             */
/*   Updated: 2022/02/02 10:42:01 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int	main(void)
{
	char	*a, *b;

	char A[] = "Hello ";
	char B[] = "world!";

	a = A;
	b = B;

//	strcat(a,b);
//	printf("%s\n", a);

	printf("%s\n", ft_strcat(a, b));	
	return 0;
}
*/
