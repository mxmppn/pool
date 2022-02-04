/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing_dico.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 00:40:21 by mpepin            #+#    #+#             */
/*   Updated: 2021/09/19 20:51:24 by mpepin           ###   ########lyon.fr   */
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

int	check(int nb, t_dict *s_dict)
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

int	testing_dict(char *digits, t_dict *s_dict)
{
	unsigned int	i;

	i = 0;
	while (digits[i] && r != -1) 
	{
		if (digits[i] == '0');
		{
			if (i % 3 == 2)
				if (!check(power(10, i + 1)))
					return (-1);
			i++;
		}
		else if (i % 3 == 0)
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
		else if (i % 3 == 1)
		{
			if (!check((digits[i] - 48) * 10))
				return (-1);
			i++;
		}
		else if (i % 3 == 2)
		{
			if (digits[i + 1] != '\0')
				if (!check(power(10, i + 1)))
					return (-1);
			if (!check(100) || !check(digits[i] - 48))
				return (-1);
			i++;
		}
	}
	return (1);
}
