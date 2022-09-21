/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:29:06 by lorampon          #+#    #+#             */
/*   Updated: 2022/09/19 12:52:18 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	checkerror(int argc, char **argv)
{
	if (checkargv(argc, argv))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (checkduplicate(argc, argv))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (check_intmax(argv))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (argc == 1)
	{
		if (ft_atoi(argv[0]) > 2147483647 || ft_atoi(argv[0]) < -2147483648)
			ft_putstr_fd("Error\n", 2);
		return (1);
	}
	return (0);
}

int	check_intmax(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) > 2147483647 || ft_atoi(argv[i]) < -2147483648)
			return (1);
		if (argv[i][0] == '-' && argv[i][1] == '0')
		{
			while (argv[j])
			{
				if (argv[j][0] == '0')
					return (1);
				j++;
			}		
		}
		i++;
	}
	return (0);
}

int	checkargv(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-')
			j++;
		if (!argv[i][j])
			return (1);
		while (argv[i][j])
		{
			if (!ft_isdigit((int)argv[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	checkduplicate(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (!ft_strncmp(argv[i], argv[j], 20))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
