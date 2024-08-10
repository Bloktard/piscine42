/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:54:19 by plerick           #+#    #+#             */
/*   Updated: 2024/08/10 22:08:26 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = nbr9;
	int ********nbr8 =&nbr9;
	int *******nbr7 = &nbr8;
	int ******nbr6 = &nbr7;
	int *****nbr5 = &nbr6;
	int ****nbr4 = &nbr5;
	int ***nbr3 = &nbr4;
	int **nbr2 = &nbr3;
	int *nbr = 42;
}

int	main(void)
{
	int	i;
	ft_ultimate_ft(&i);
	write(1, &i, 2);
	return (0);
}
