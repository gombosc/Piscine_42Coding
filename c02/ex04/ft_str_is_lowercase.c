/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:42:49 by cgombos           #+#    #+#             */
/*   Updated: 2024/02/19 15:44:19 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_c( int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
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
int	main()
{
	char *str1 = "hello";  
	char *str2 = "heLLo";
	printf("String '%s': %d\n", str1, ft_str_is_lowercase(str1)); 
	printf("String '%s': %d\n", str2, ft_str_is_lowercase(str2));
}
*/
