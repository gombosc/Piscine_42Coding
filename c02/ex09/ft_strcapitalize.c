/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:45:43 by cgombos           #+#    #+#             */
/*   Updated: 2024/02/29 16:18:59 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	check_lowercase(char c)
{
	if (c >= 'a' && c <= 'z' )
		c -= 32;
	return (c);
}

void	lower_ch(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z' )
			*str += 32;
		str++;
	}
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	lower_ch(str);
	str[0] = check_lowercase(str[0]);
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			str[i + 1] = check_lowercase(str[i + 1]);
		if (str[i] >= 43 && str[i] <= 46)
			str[i + 1] = check_lowercase(str[i + 1]);
		if (str[i] >= 58 && str[i] <= 63)
			str[i + 1] = check_lowercase(str[i + 1]);
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "salut comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	return (0);
}*/
