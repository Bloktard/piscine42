/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 20:06:48 by plerick           #+#    #+#             */
/*   Updated: 2024/08/15 21:33:22 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;

	if (str[0] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] < 64 || (str[i] > 90 && str[i] < 97) || str[i] > 123)
		{
			i++;
		}
		else
		{
			if (str[i - 1] >= 65  && str[i] <= 90)
			{
				str[i] = str[i] - 32;
				i++;
			}
		}

/*		if (str[i] != (str[i] < 97 || str[i] > 122))
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
		{
			i++;
		}*/
	}
	return (str);
}

int	main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(a);
	printf("%s", a);
	return (0);
}
