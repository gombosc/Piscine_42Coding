/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:04:38 by cgombos           #+#    #+#             */
/*   Updated: 2024/03/04 12:55:16 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int	div;

	div = 2;
	while (div <= nb / 2)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	n_prime;

	n_prime = nb;
	if (n_prime < 2)
		return (2);
	while (!is_prime(n_prime))
		n_prime++;
	return (n_prime);
}
/*
int	main(void)
{
	int n = 12;
	int result = ft_find_next_prime(n);
	printf("%d", result);
	return (0);
}*/
