/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:13:53 by lorampon          #+#    #+#             */
/*   Updated: 2022/09/19 13:40:01 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	char	**list;
	t_list	*head;
	t_list	*b;
	int		i;

	if (ft_basic_error(argc, argv))
		return (0);
	if (argc == 2)
		list = ft_split(argv[1], ' ');
	else
		list = &argv[1];
	i = 0;
	while (list[i])
		i++;
	if (checkerror(i, list))
	{
		if (argc == 2)
			ft_freestack(list);
		return (0);
	}
	head = createstack(i, list, argc);
	sorter(&head, &b);
	return (0);
}

int	ft_basic_error(int argc, char **argv)
{
	if (argc == 1)
		return (1);
	if (argc == 2)
	{
		if (!argv[1][0])
			return (1);
		if (argv[1][0] == ' ' && !argv[1][1])
		{
			ft_putstr_fd("Error\n", 2);
			return (1);
		}
	}
	return (0);
}

void	ft_freelist(t_list *head)
{
	t_list	*tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->content);
		free(tmp);
	}
}

void	ft_freestack(char **list)
{
	int		i;

	i = 0;
	while (list[i])
	{
		free(list[i]);
		i++;
	}
	free(list);
}
