/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:45:17 by cgombos           #+#    #+#             */
/*   Updated: 2024/03/01 23:31:21 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_chr_match(char *str, char *to_find)
{
	while (*to_find != '\0')
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			if (str_chr_match(str, to_find))
				return (start);
		}
		str++;
		start++;
	}
	return (0);
}
/*
int	main(void)
{
	char str[] = "Hello to Hello Everyone";
	char to_find[] = "Ever";
	char *result = ft_strstr(str, to_find);
	printf("%s",result);
	return (0);
}*/
