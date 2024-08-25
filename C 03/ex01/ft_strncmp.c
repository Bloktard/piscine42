/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:14:14 by plerick           #+#    #+#             */
/*   Updated: 2024/08/25 21:50:04 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
int	main(void)
{
	unsigned int	n;
	char	s1[] = "qqq";
	char	s2[] = "qqq";

	n = 0;
	ft_strncmp(s1, s2, n);
	printf("la valeur est :%d", ft_strncmp(s1, s2, n));
	return (0);
}
*/
