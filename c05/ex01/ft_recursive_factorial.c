/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 23:21:55 by cgombos           #+#    #+#             */
/*   Updated: 2024/03/03 00:03:01 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (r);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	int n = 5;
	n = ft_recursive_factorial(n);
	printf("%d", n);
}*/
