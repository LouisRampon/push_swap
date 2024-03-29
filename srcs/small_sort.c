/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:13:22 by lorampon          #+#    #+#             */
/*   Updated: 2022/06/09 16:58:50 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_five_sort(t_list **stack1, t_list **stack2)
{
	ft_five_sort_loop(stack1, stack2, 0);
	ft_five_sort_loop(stack1, stack2, 1);
	ft_three_sort(stack1);
	ft_double_push(stack1, stack2);
}

void	ft_five_sort_loop(t_list **stack1, t_list **stack2, int tofind)
{
	while (1)
	{
		if (ft_btoi((*stack1)->content) == tofind)
		{
			push(stack2, stack1);
			write(1, "pb\n", 3);
			break ;
		}
		if (ft_rotate_or_reverse(stack1, tofind))
		{
			reverse(stack1);
			write(1, "rra\n", 4);
		}
		else
		{
			rotate(stack1);
			write(1, "ra\n", 3);
		}
	}
}

void	ft_three_sort(t_list **stack1)
{
	int		tmp1;
	int		tmp3;
	int		tmp2;

	tmp1 = ft_btoi((*stack1)->content);
	tmp2 = ft_btoi((*stack1)->next->content);
	tmp3 = ft_btoi((*stack1)->next->next->content);
	if (tmp1 > tmp2 && tmp3 > tmp2 && tmp3 > tmp1)
	{
		swap((*stack1));
		write(1, "sa\n", 3);
	}
	else if (tmp1 > tmp2 && tmp2 > tmp3 && tmp1 > tmp3)
	{
		swap((*stack1));
		reverse(stack1);
		write(1, "sa\nrra\n", 7);
	}
	ft_three_sort_next(tmp1, tmp2, tmp3, stack1);
}

void	ft_three_sort_next(int tmp1, int tmp2, int tmp3, t_list **stack1)
{
	if (tmp1 > tmp3 && tmp3 > tmp2 && tmp1 > tmp3)
	{
		rotate(stack1);
		write(1, "ra\n", 3);
	}
	else if (tmp2 > tmp3 && tmp3 > tmp1 && tmp2 > tmp1)
	{
		swap((*stack1));
		write(1, "sa\n", 3);
		rotate(stack1);
		write(1, "ra\n", 3);
	}
	else if (tmp2 > tmp1 && tmp1 > tmp3 && tmp2 > tmp1)
	{
		reverse(stack1);
		write(1, "rra\n", 4);
	}
}

void	ft_two_sort(t_list **a)
{
	if (ft_btoi((*a)->content) > ft_btoi((*a)->next->content))
	{
		swap(*a);
		write(1, "sa\n", 3);
	}
}
