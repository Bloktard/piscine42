/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 01:31:03 by plerick           #+#    #+#             */
/*   Updated: 2024/08/29 16:57:26 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *strs)
{
	int	i;

	i = 0;
	while (strs[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_tabcat(char **strs, char *sep, int size, char *receve)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	a = 0;
	while (a < size)
	{
		j = 0;
		while (strs[a][j])
			receve[i++] = strs[a][j++];
		if (a < size - 1)
		{
			j = 0;
			while (sep[j])
				receve[i++] = sep[j++];
		}
		a++;
	}
	receve[i] = '\0';
	return (receve);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		l;
	int		i;
	char	*receve;

	i = 0;
	l = 0;
	while (i < size)
	{
		l = l + ft_strlen(strs[i]);
		i++;
	}
	l = l + ((size - 1) * ft_strlen(sep));
	receve = malloc(sizeof(char) * l);
	if (receve == NULL)
		return (0);
	ft_tabcat(strs, sep, size, receve);
	return (receve);
}
/*
int	main(void)
{
	int	i = 4;
	char	*strs[] = {"coucou", "blabla", "haha", "hoho"};
	char	sep[] = "-";
	char	*lol;

	lol = ft_strjoin(i, strs, sep);
	printf("%s", lol);
	free(lol);
	return (0);
}
*/
