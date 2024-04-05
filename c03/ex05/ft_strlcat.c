/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:24:05 by cgombos           #+#    #+#             */
/*   Updated: 2024/03/02 18:26:14 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Find lengths of the strings
// Can't copy if size is zero
// Leave space for null terminator
// Copy from src to dest
// Add null terminator
// Return would-be length of the concatenated string

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;

	i = 0;
	src_len = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (src[i] != '\0' && i < size - dest_len)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char src[] = "123456789";
	char dest[10] = "test";
	int size = sizeof(dest) - sizeof(dest[0]);
	int result = ft_strlcat(dest, src, size);
	printf("%d", result);
	return (0);
}*/
