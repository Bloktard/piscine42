/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:29:33 by plerick           #+#    #+#             */
/*   Updated: 2024/08/07 20:50:20 by plerick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}
/*
int	main(void)

{
	ft_print_alphabet();
	return (0);
}
*/
