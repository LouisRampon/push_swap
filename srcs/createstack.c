/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createstack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:24:17 by lorampon          #+#    #+#             */
/*   Updated: 2022/06/08 17:53:17 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*createstack(int argc, char **argv, int j)
{
	int		i;
	t_list	*temp_struct;
	t_list	*head;
	void	*ptr;
	char	**strs;

	i = 0;
	head = NULL;
	ptr = NULL;
	strs = ft_simplify_stack(argc, argv);
	while (i < argc)
	{
		ptr = strs[i];
		temp_struct = ft_lstnew(ptr);
		ft_lstadd_back(&head, temp_struct);
		i++;
	}
	if (j == 2)
		ft_freestack(argv);
	free(strs);
	return (head);
}

char	**ft_simplify_stack(int argc, char **argv)
{
	int		j;
	char	**str;

	j = 0;
	str = malloc(sizeof(*str) * (argc + 1));
	if (!str)
		return (0);
	while (argv[j])
	{
		str[j] = ft_simplify_stack_next(argv[j], argv);
		j++;
	}
	j = 0;
	return (str);
}

char	*ft_simplify_stack_next(char *str, char **strs)
{
	int	nbr;
	int	i;

	i = 0;
	nbr = 0;
	while (strs[i])
	{
		if (ft_compare(str, strs[i]))
			nbr++;
		i++;
	}
	return (ft_itob(nbr));
}
