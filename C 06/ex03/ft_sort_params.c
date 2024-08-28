/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 05:04:01 by plerick           #+#    #+#             */
/*   Updated: 2024/08/26 19:17:49 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ptstr(char *a)
{
	int	i;

	i = 0;
	while (a[i])
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

void	ft_swap(char *a, char *b)
{
	char	*temp;
	
	temp = a;
	a = b;
	b = temp;
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (argc < 2)
		return (0);
	while (argc > x)
	{
		while (ft_strcmp(&argv[x + argc][y], &argv[x + argc - 1][y]) < 0)
		{
			ft_swap(argv[x + argc], argv[x + argc - 1]);
		}
		argc--;
		y = 0;
	}
	y = 0;
	while (argv[x][y] != '\0')
	{
		ptstr(&argv[x][y]);
		x++;
	}
	return (0);
}
