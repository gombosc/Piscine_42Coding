/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_atoi.c											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: cgombos <cgombos@student.42vienna.com		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/03/02 18:59:31 by cgombos		   #+#	  #+#			  */
/*	 Updated: 2024/03/02 19:00:15 by cgombos		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	unsigned int	sign;
	unsigned int	result;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	int result = ft_atoi(" 		  ---+--+1234ab567");
	printf("Result: %d", result);
}*/
