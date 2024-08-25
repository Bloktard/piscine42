/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:14:14 by plerick           #+#    #+#             */
/*   Updated: 2024/08/22 02:30:22 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	unsigned int	n;
	char	s1[] = "qqqqqqp";
	char	s2[] = "qqqqqqp";

	n = 5;
	ft_strncmp(s1, s2, n);
	printf("la valeur est :%d", ft_strncmp(s1, s2, n));
	return (0);
}
*/
