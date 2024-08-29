/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:44:08 by plerick           #+#    #+#             */
/*   Updated: 2024/08/29 00:50:55 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	l;
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	l = max - min;
	tab = malloc((sizeof(int) * l));
	if (tab == NULL)
		return (-1);
	*range = tab;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (l);
}
/*
int	main(void)
{
	int	min = 20;
	int	max = 51;
	int	*range = 0;
	int	i = 0;
	int	l;

	l = 0;
	l = ft_ultimate_range(&range, min, max);
	printf("%d\n", l);	
	while (min < max)
	{
		printf("%d\n", range[i]);
		i++;
		min++;
	}
	free(range);
	return (0);
}
*/
