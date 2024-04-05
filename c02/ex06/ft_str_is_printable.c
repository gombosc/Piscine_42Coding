/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:42:49 by cgombos           #+#    #+#             */
/*   Updated: 2024/02/19 16:02:01 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_c( int c)
{
	if ((c > 31) && (c < 127))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!check_c(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
