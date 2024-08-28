/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 05:04:01 by plerick           #+#    #+#             */
/*   Updated: 2024/08/27 03:04:30 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ptstr(char *a)
{
	int	i;

	i = 0;
	if (a == NULL)
		return ;
	while (a[i])
	{
		write(1, a, 1);
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
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_tri_tab(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argc > i)
	{
		j = i + 1;
		while (argc > j)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(argv[i], argv[j]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc < 2)
		return (0);
	ft_tri_tab(argc, argv);
	i = 1;
	j = 0;
	while (argv[i])
	{
		ptstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
