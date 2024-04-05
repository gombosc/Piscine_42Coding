/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:03:08 by cgombos           #+#    #+#             */
/*   Updated: 2024/03/06 18:32:15 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_len(char *str)
{
	char	*start;

	start = str;
	while (*str)
		str++;
	return (str - start);
}

int	calc_size(int size, char **strs, char *sep)
{
	int	total_len;
	int	sep_len;
	int	i;

	i = 0;
	total_len = 0;
	sep_len = str_len(sep);
	while (i < size)
	{
		total_len += str_len(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

int	append_str(char *arr, char *str, int pos)
{
	int	i;

	i = 0;
	while (str[i])
	{
		arr[pos] = str[i];
		pos++;
		i++;
	}
	return (pos);
}

char	*concat_strs(int size, char **strs, char *sep, int total_len)
{
	int		pos;
	int		i;
	char	*arr;

	i = 0;
	pos = 0;
	arr = malloc ((total_len + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		pos = append_str(arr, strs[i], pos);
		if (i < size - 1)
			pos = append_str(arr, sep, pos);
		i++;
	}
	arr[pos] = '\0';
	return (arr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*empty_str;
	int		total_len;

	if (size == 0)
	{
		empty_str = malloc(sizeof(char));
		empty_str[0] = '\0';
		return (empty_str);
	}
	else
	{
		total_len = calc_size(size, strs, sep);
		return (concat_strs(size, strs, sep, total_len));
	}
}

int	main(void)
{
	char *strs[] = {"Hello", "world", "in", "C"};
	int	size = sizeof(strs) / sizeof(strs[0]);
	char *sep = "&";

	char *res = ft_strjoin(size, strs, sep);
	if (res != NULL)
	{
		printf("Result: %s\n", res);
		free (res);
	}
	else
		printf("Memory allocation failed\n");

	return (0);
}
