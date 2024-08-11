/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:54:26 by plerick           #+#    #+#             */
/*   Updated: 2024/08/11 19:23:53 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tempo;

	tempo = *a;
	*a = *b;
	*b = tempo;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 50;
	y = 48;
	write(1, &x, 1);
	write(1, &y, 1);
	ft_swap(&x, &y);
	write(1, "\n", 2);
	write(1, &x, 1);
	write(1, &y, 1);
	return (0);
}
*/
