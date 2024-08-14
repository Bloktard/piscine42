/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:43:02 by plerick           #+#    #+#             */
/*   Updated: 2024/08/15 00:47:32 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
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
	char	a[] = "ssqQwds";

	ft_str_is_lowercase(a);
	if (ft_str_is_lowercase(a) == 1)
	{
		printf ("Ce n'est que des lower donc %d", ft_str_is_lowercase(a));
	}
	else
	{
		printf ("Ce n'est pas que des lower donc %d", ft_str_is_lowercase(a));
	}
	return (0);
}
*/
