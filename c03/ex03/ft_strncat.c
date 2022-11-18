/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:04:02 by suchen            #+#    #+#             */
/*   Updated: 2022/02/01 13:04:52 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (dest[c] != '\0')
		c++;
	while (src[d] != '\0' && d < nb)
	{
		dest[c + d] = src[d];
		d++;
	}
	dest[c + d] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char *d, *s;

	char a[50] = "abcdefg";
	char b[50] = "hijklmn";
	
	d = a;
	s = b;
	
	int nb= 9;
	
//	printf("%s\n", strncat(a, b, nb));
	printf("%s\n", ft_strncat(a, b, nb));

	return 0;
}
*/
