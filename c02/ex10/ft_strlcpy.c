/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:35:15 by cgombos           #+#    #+#             */
/*   Updated: 2024/02/29 16:17:59 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Find length of source string
// Handle zero size scenario
// Find length of source string
// Copy charact (up to size -1)
// Ensure null termination
// Return the lenght of source string
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size == 0)
	{
		return (src_len);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[size - 1] = '\0';
	return (src_len);
}
/*
int main(void)
{
	char s[] = "Blablabal";
	char dest[20] = "blabla";
	int n = 10;

	int length = ft_strlcpy(dest, s, n);
	printf("%d %s", length, dest);
}*/
