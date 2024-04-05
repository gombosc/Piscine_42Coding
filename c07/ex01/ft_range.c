/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:46:34 by cgombos           #+#    #+#             */
/*   Updated: 2024/03/05 22:46:50 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
int	main(void)
{
	int min = 1;
	int max = 10;
	int *array = ft_range(min, max);
	
	for (int i=0; i<max-min;i++){
		printf("%d", array[i]);
		printf("\n");}
	return 0;
}*/
