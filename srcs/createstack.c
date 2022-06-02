/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createstack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:24:17 by lorampon          #+#    #+#             */
/*   Updated: 2022/06/01 14:30:59 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*createstack(int argc, char **argv)
{
	int		i;
	t_list	*temp_struct;
	t_list	*head;
	int		*ptr;

	i = 0;
	head = NULL;
	while (i < argc)
	{
		ptr = malloc(sizeof(int));
		*ptr = ft_atoi(argv[i]);
		temp_struct = ft_lstnew(ptr);
		ft_lstadd_back(&head, temp_struct);
		i++;
	}
	return (head);
}