/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 00:37:41 by plerick           #+#    #+#             */
/*   Updated: 2024/08/22 03:20:16 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			while (str[temp + i] == to_find[temp])
			{
				temp++;
				if (to_find[temp] == '\0')
				{
					return (&str[i]);
				}
			}
			temp = 0;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	la_phrase[] = "toto est rigolo";
	char	motyes[] = "est";

	printf("le mot a ete trouve : %s", ft_strstr(la_phrase, motyes));
	return (0);
}
*/
