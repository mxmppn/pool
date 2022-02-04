/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 12:15:20 by mpepin            #+#    #+#             */
/*   Updated: 2021/09/19 21:59:55 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_rev_in_tab(char *tab, int size)
{
	int		mid;
	int		i;
	char	temp;

	i = 0;
	mid = size / 2;
	while (i < mid)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
	return ;
}

unsigned int	count_digits(unsigned int nbr)
{
	unsigned int	puiss;
	unsigned int	digits_number;

	puiss = 10;
	digits_number = 1;
	while (nbr / puiss > 0)
	{
		digits_number++;
		puiss *= 10;
	}
	return (digits_number);
}

char	*itoa_reversed(unsigned int nbr)
{
	unsigned int	puiss;
	unsigned int	digits_number;
	char			*digits;
	unsigned int	i;

	puiss = 10;
	digits_number = count_digits(nbr);
	i = digits_number - 1;
	digits = malloc(sizeof(char) * (digits_number + 1));
	digits[digits_number] = '\0';
	while (i != -1)
	{
		digits[i] = (nbr % puiss) + 48;
		nbr = nbr / 10;
		i--;
	}
	ft_rev_in_tab(digits, digits_number);
	return (digits);
}

/*void main(int ac, char **av)
{
	printf("%s\n", itoa_reversed(atoi(av[1])));

}*/
