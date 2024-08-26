/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 05:04:01 by plerick           #+#    #+#             */
/*   Updated: 2024/08/26 16:59:01 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ptstr(char *a)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &a, 1);
		i++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
	{
		if (str1[i] == str2[i])
		{
			i++;
		}
		else
		{
			return (str1[i] - str2[i]);
		}
	}
	return (str1[i] - str2[i]);
}

void	ft_swap(int *a, int *b)
{
	
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	if (argc < 2)
		return (0);
	while (argv[x][y] < argc)
	{
		
	}
	return (0);
}
