/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:05:06 by plerick           #+#    #+#             */
/*   Updated: 2024/08/14 20:34:44 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 64 || (str[i] > 90 && str[i] < 97) || str[i] > 123)
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
	char	a[] = "";

	ft_str_is_alpha(a);
	if (ft_str_is_alpha(a) == 1)
	{
		printf ("Ce n'est que des char donc %d", ft_str_is_alpha(a));
	}
	else
	{
		printf ("Ce n'est pas que des char donc %d", ft_str_is_alpha(a));
	}
	return (0);
}
*/
