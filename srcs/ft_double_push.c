/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:06:39 by lorampon          #+#    #+#             */
/*   Updated: 2022/06/09 16:57:21 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_double_push(t_list **stack1, t_list **stack2)
{
	push(stack1, stack2);
	push(stack1, stack2);
	write(1, "pa\npa\n", 6);
}

int	ft_rotate_or_reverse(t_list **a, int tofind)
{
	t_list	*head;
	int		i;

	head = *a;
	i = 0;
	while (*a)
	{
		if (ft_btoi((*a)->content) == tofind)
			break ;
		i++;
		*a = (*a)->next;
	}
	*a = head;
	if (ft_lstsize(*a) / 2 > i)
		return (0);
	return (1);
}
