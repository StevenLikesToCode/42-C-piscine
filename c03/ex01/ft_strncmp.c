/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:46:43 by suchen            #+#    #+#             */
/*   Updated: 2022/02/01 19:48:51 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}
/*
#include<string.h>
#include<stdio.h>
int	main (void)
{
	char *s1 ,*s2 ,*s3;

	char a[] = "the";
	char b[] = "their";
	char c[] = "";

	s1 = a;
	s2 = b;
	s3 = c;

	int n = 5;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
	printf("%d\n", strncmp(s3, s2, n));	
	return 0;
}
*/
