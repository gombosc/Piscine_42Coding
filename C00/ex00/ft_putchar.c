/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:33:09 by cgombos           #+#    #+#             */
/*   Updated: 2024/02/14 22:54:22 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putchar(char *c)
{
	write(1, c, 1);
}

int main(void)
{
	char str[] = "Hello World";
	char str2[] = "Hello World!!!";
	printf("Test1: %s", str);
	for  (int i=0; i<11;  i++)
	{
		ft_putchar(str[i]);
	} 
	return (0);
}
