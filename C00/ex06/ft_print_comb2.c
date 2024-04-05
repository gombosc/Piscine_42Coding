/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 19:55:04 by cgombos           #+#    #+#             */
/*   Updated: 2024/02/16 20:35:59 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_nr(char tens, char ones, char tens2, char ones2)
{
	write(1, &tens, 1);
	write(1, &ones, 1);
	write(1, " ", 1);
	write(1, &tens2, 1);
	write(1, &ones2, 1);
	write(1, ",", 1);
}

void	ft_print_comb(char tens, char ones, char tens_2, char ones_2)
{
	char	first_tens;
	char	first_ones;
	char	s_tens;
	char	s_ones;

	first_tens = '0';
	first_ones = '0';
	while (first_tens <= '9')
	{
		s_tens = '0';
		s_ones = '0';
		while (s_tens <= '9')
		{
			write_nr(first_tens, first_ones, s_tens, s_ones);
			s_ones++;
			if (s_ones > '9')
			{
				s_ones = '0';
				s_tens++;
			}
		}
		first_ones++;
		if (first_ones > '9')
		{
			first_ones = '0';
			first_tens++;
		}
	}
}
