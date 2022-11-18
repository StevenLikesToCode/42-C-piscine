/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:38:32 by suchen            #+#    #+#             */
/*   Updated: 2022/01/20 22:03:13 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}	
	return (s1[i] - s2[i]);
}
/*
#include<stdio.h>
int	main(void)
{
	char	*str1 ,*str2;

	char	j[] = "there";
	char	k[] = "their";
	
	str1 = j;
	str2 = k;
	
	printf("%d\n", ft_strcmp(str1, str2));
	return 0;
}
*/
