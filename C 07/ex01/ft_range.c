/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 02:51:01 by plerick           #+#    #+#             */
/*   Updated: 2024/08/28 03:42:07 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	l;
	int	*tab;
	int	i;

	i = 0;
	if (max - min <= 0)
		return (NULL);
	else
		l = max - min;
	tab = malloc(sizeof(int) * l);
	if (tab == NULL)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int	main(void)
{
	int	min = 20;
	int	max = 51;
	int	*tab;
	int	i;

	i = 0;
	tab = ft_range(min, max);
	while (min < max)
	{
		printf("%d\n", tab[i]);
		i++;
		min++;
	}
	free(tab);
	return (0);
}
