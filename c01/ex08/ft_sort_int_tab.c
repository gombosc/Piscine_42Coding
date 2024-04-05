/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 21:08:41 by cgombos           #+#    #+#             */
/*   Updated: 2024/02/28 22:31:36 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_nr(int *tab, int i)
{
	int	temp;

	temp = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swaps;

	i = 0;
	while (tab)
	{
		swaps = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				check_nr(tab, i);
				swaps++;
			}
			i++;
		}
		if (swaps == 0)
		{
			break ;
		}
		i = 0;
	}
}
/*
int main(){
    int str[] = {3, 1, 6, 7, 9, 5, 3342, 8, 23, 10, 80, 645};
    int size = sizeof(str) / sizeof (str[0]);
    ft_sort_int_tab(str, size);
    return 0;
}*/
