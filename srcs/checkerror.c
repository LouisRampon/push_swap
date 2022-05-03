/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:29:06 by lorampon          #+#    #+#             */
/*   Updated: 2022/05/03 14:06:59 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	checkerror(int argc, char **argv)
{
	if (argc <= 1)
	{
		ft_printf("Aucun arguments");
		return (1);
	}
	if (checkargv(argc, argv))
	{
		ft_printf("Arguments incorrect");
		return (1);
	}
	if (checkduplicate(argc, argv))
	{
		ft_printf("Arguement en double");
		return (1);
	}
	return (0);
}

int	checkargv(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-')
			j++;
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

	i = 1;
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
