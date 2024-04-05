/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 23:21:55 by cgombos           #+#    #+#             */
/*   Updated: 2024/03/03 19:34:36 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 1;
	if (nb <= 0)
		return (0);
	while (sqr * sqr <= nb)
	{
		if (sqr * sqr == nb)
			return (sqr);
		else if (sqr >= 46340)
			return (0);
		sqr++;
	}
	return (0);
}
/*
int	main(void)
{
	int n = 9;
	n = ft_sqrt(n);
	printf("%d", n);
	return 0;
}*/
