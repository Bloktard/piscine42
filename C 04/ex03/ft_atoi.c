/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 23:51:41 by plerick           #+#    #+#             */
/*   Updated: 2024/08/25 00:18:02 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	chif;

	if (*str == '\0')
		return (0);
	i = 0;
	while ((str[i] >= 9 && str[i] <= 15) || str[i] == ' ')
		i++;
	neg = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	chif = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		chif = chif * 10 + (str[i] - '0');
		i++;
	}
	return (chif * neg);
}
/*
int	main(void)
{
	char	lol[] =  "    -+-+-+-+-++++------+---+45654645wf65421";
	char	lol1[] =  "231";
	char	lol2[] =  " -421";
	char	lol3[] =  "+5654645wf65421";
	char	lol4[] =  "-2147483648";


	ft_atoi(lol);
	printf("%d\n", ft_atoi(lol));
	printf("%d\n", ft_atoi(lol1));
	printf("%d\n", ft_atoi(lol2));
	printf("%d\n", ft_atoi(lol3));
	printf("%d\n", ft_atoi(lol4));
	return (0);
}
*/
