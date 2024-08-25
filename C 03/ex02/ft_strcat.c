/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:46:44 by plerick           #+#    #+#             */
/*   Updated: 2024/08/19 20:54:24 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	i = 0;
	while (src[i] != '\0')
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
	char	src[] = "blabla";
	char	dest[] = "hoho";

	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}
*/
