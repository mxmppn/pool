/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:52:25 by mpepin            #+#    #+#             */
/*   Updated: 2021/09/19 21:10:15 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	power(int nb, int power)
{
	int	puiss;

	puiss = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		puiss *= nb;
		power --;
	}
	return (puiss);
}

int	check_in_struct(int nb, t_dict *s_dict)
{
	unsigned int	i;

	i = 0;
	while (s_dict[i].str)
	{
		if (s_dict[i].nb == nb)
			return (1);
		i++;
	}
	return (-1);
}

int	check_u(unsigned int i, t_dict s_struct)
{
	if (digits[i + 1] == '1')
	{
				if (!check((digits[i + 1] - 48) * 10 + (digits[i] - 48)))
					return (-1);
				i += 2;
			}
			else
			{
				if (!check(digits[i]))
					return (-1);
				i++;
			}
}

int	check_d()
{

}

int	check_c()
{

}
