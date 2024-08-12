/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:49:36 by plerick           #+#    #+#             */
/*   Updated: 2024/08/12 21:43:31 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempo1;
	int	tempo2;

	tempo1 = *a / *b;
	tempo2 = *a % *b;
	*a = tempo1;
	*b = tempo2;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	resu;
	int	rest;

	a = 26;
	b = 5;
	resu = a;
	rest = b;
	ft_ultimate_div_mod(&resu, &rest);
	printf("26 / 5 = %d", resu);
	printf(" reste = %d", rest);
	return (0);
}
*/
