/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:33:10 by plerick           #+#    #+#             */
/*   Updated: 2024/08/22 02:59:46 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (i < nb && src[i])
	{
		dest[i + count] = src[i];
		i++;
	}
	dest[i + count] = '\0';
	return (dest);
}
/*
int	main(void)
{
	unsigned int nb = 5;
	char	src[] = "";
	char	dest[] = "";

	ft_strncat(dest, src, nb);
	printf("%s", dest);
	return (0);
}
*/
