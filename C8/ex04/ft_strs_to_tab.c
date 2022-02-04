/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 06:43:59 by mpepin            #+#    #+#             */
/*   Updated: 2021/09/22 20:19:16 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	long int	i;
	long int	j;
	char		*str;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	while (j < i)
	{
		str[j] = src[j];
		j++;
	}
	str[j] = 0;
	return (str);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	long		i;
	t_stock_str	*tab_struct;

	i = 0;
	tab_struct = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab_struct)
		return (0);
	while (i < ac)
	{
		tab_struct[i].size = ft_strlen(av[i]);
		tab_struct[i].str = av[i];
		tab_struct[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab_struct[i].str = 0;
	return (tab_struct);
}
