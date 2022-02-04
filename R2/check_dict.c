/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:44:55 by mpepin            #+#    #+#             */
/*   Updated: 2021/09/19 22:31:04 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_error()
{
	write(1, "Dict Error\n", 11);
}


void	print_letters(nb, )
{

}

int	check_dict(char *digits, t_dict *s_dict)
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
