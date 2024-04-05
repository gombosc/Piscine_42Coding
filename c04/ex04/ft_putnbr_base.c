/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_putnbr_base.c									:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: cgombos <cgombos@student.42vienna.com		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/03/02 22:44:41 by cgombos		   #+#	  #+#			  */
/*	 Updated: 2024/03/02 22:44:43 by cgombos		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == base[i + 1] || base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	converted[64];
	int	i;
	int	base_len;

	i = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	base_len = check_base(base);
	if (base_len < 2)
		return ;
	while (nbr)
	{
		converted[i] = nbr % base_len;
		nbr = nbr / base_len;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &base[converted[i]], 1);
		i--;
	}
}
/*
int main()
{
	// /Test Cases
	ft_putnbr_base(125, "0123456789");
	printf("\n");
	ft_putnbr_base(-21, "01");
	printf("\n");
	ft_putnbr_base(4096, "0123456789ABCDEF");
	printf("\n");
	return (0);
}*/
