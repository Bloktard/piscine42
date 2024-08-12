/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 19:25:22 by plerick           #+#    #+#             */
/*   Updated: 2024/08/12 14:48:59 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
	resu = 55;
	rest = 55;
	ft_div_mod(a, b, &resu, &rest);
	printf("26 / 5 = %d", resu);
	printf(" reste = %d", rest);
	return (0);
}
*/
