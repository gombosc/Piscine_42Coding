/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:04:38 by cgombos           #+#    #+#             */
/*   Updated: 2024/03/03 21:06:09 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (div <= nb / 2)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}
/*
int	main(void)
{
	int n = 13;
	int result = ft_is_prime(n);
	printf("%d", result);
	return (0);
}*/
