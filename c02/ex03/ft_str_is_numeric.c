/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:28:14 by cgombos           #+#    #+#             */
/*   Updated: 2024/02/19 15:32:56 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_c(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
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
/*
int main() {
    char str[] = {1,2,3,4};
    ft_str_is_numeric(str);
    return 0;
}
*/
