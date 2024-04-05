/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 23:21:55 by cgombos           #+#    #+#             */
/*   Updated: 2024/03/02 23:39:25 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (res);
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
/*
int main(void)
{
	int n = 5;
	n = ft_iterative_factorial(n);
	printf("%d", n);
}*/
