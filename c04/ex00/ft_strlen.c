/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 00:57:13 by cgombos           #+#    #+#             */
/*   Updated: 2024/03/02 00:57:14 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + ft_strlen(str + 1));
}
/*
int		main()
{
	char str[] = "Len";
	int result = ft_strlen(str);
	printf("%d", result);
	return (0);
}
*/
