/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:54:48 by plerick           #+#    #+#             */
/*   Updated: 2024/08/21 15:53:39 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "$%^&*(";

	ft_str_is_printable(a);
	if (ft_str_is_printable(a) == 1)
	{
		printf ("Que des printable donc %d", ft_str_is_printable(a));
	}
	else
	{
		printf ("Pas que des printable dc %d", ft_str_is_printable(a));
	}
	return (0);
}
*/
