/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:03:27 by plerick           #+#    #+#             */
/*   Updated: 2024/08/19 15:18:50 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	count1;
	int	count2;

	count1 = 0;
	count2 = 0;
	while (s1[count1] != '\0')
		count1++;
	while (s2[count2] != '\0')
		count2++;
	if (count1 == count2)
		return ('0');
	if (count1 < count2)
		return (-1);
	if (count1 > count2)
		return ('1');
	return (10);
}

int	main(void)
{
	char	s1[] = "c'est super ici";
	char	s2[] = "mais ici c'est pas trop tip top";

	ft_strcmp(s1, s2);
	return (0);
}
