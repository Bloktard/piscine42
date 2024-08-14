/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:31:13 by plerick           #+#    #+#             */
/*   Updated: 2024/08/15 00:41:35 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
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
	char	a[] = "0139s";

	ft_str_is_numeric(a);
	if (ft_str_is_numeric(a) == 1)
	{
		printf ("Ce n'est que des int donc %d", ft_str_is_numeric(a));
	}
	else
	{
		printf ("Ce n'est pas que des int donc %d", ft_str_is_numeric(a));
	}
	return (0);
}
*/
