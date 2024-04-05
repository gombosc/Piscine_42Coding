/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:36:28 by cgombos           #+#    #+#             */
/*   Updated: 2024/02/15 15:50:33 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	value;

	if (n < 0)
	{
		value = 'N';
		write(1, &value, 1);
	}
	else
	{
		value = 'P';
		write(1, &value, 1);
	}
}
