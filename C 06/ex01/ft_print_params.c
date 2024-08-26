/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:37:21 by plerick           #+#    #+#             */
/*   Updated: 2024/08/26 01:58:19 by plerick          ###   ########.fr       */
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
	while (argc > x)
	{
		while (argv[x][y])
		{
			write(1, &argv[x][y], 1);
			y++;
		}
		y = 0;
		write(1, "\n", 1);
		x++;
	}
	return (0);
}
