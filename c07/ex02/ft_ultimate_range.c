/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:50:24 by cgombos           #+#    #+#             */
/*   Updated: 2024/03/05 23:18:25 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc (size * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
int	main(void)
{
	int min = 10;
    int max = 31;
    int *array;
    int size;

    size = ft_ultimate_range(&array, min, max);
    if (size == -1)
    {
        printf("Error: malloc failed\n");
        return (1);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
		printf("\n");
    }
    printf("\n");
    return (0);
}*/
