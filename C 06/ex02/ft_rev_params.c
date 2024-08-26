/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 02:01:01 by plerick           #+#    #+#             */
/*   Updated: 2024/08/26 04:19:09 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	if (argc < 2)
		return (0);
	while (x < argc)
	{
		while (argv[x][y] != '\0')
		{
			write(1, &argv[argc - 1][y], 1);
			y++;
		}
		y = 0;
		argc--;
		write(1, "\n", 1);
	}
	return (0);
}
