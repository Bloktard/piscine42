/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:50:10 by plerick           #+#    #+#             */
/*   Updated: 2024/08/15 00:53:56 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "QWDQWD";

	ft_str_is_uppercase(a);
	if (ft_str_is_uppercase(a) == 1)
	{
		printf ("Ce n'est que des upper donc %d", ft_str_is_uppercase(a));
	}
	else
	{
		printf ("Ce n'est pas que des upper donc %d", ft_str_is_uppercase(a));
	}
	return (0);
}
*/
