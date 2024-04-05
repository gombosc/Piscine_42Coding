/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:05:16 by cgombos           #+#    #+#             */
/*   Updated: 2024/03/01 21:42:42 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	src_len;
	unsigned int	dest_len;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0' && src_len < nb)
	{
		dest[dest_len + src_len] = src[src_len];
		src_len++;
	}
	dest[dest_len + src_len] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest[] = "Hello";
	char src[] = "Stupidsss";
	unsigned int n = 6;
	ft_strncat(dest, src, n);
	printf("%s", dest);
	return (0);
}*/
