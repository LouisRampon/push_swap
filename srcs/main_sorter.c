/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sorter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:11:28 by lorampon          #+#    #+#             */
/*   Updated: 2022/06/09 16:58:34 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sorter(t_list **stack1, t_list **stack2)
{
	t_list	*a;
	t_list	*b;
	int		sort;

	b = *stack2;
	a = *stack1;
	sort = ft_sort_nbr(stack1);
	if (ft_is_sort(&a))
	{
		ft_freelist(a);
		return ;
	}
	if (ft_lstsize(a) == 3)
		ft_three_sort(&a);
	else if (ft_lstsize(a) == 2)
		ft_two_sort(&a);
	else if (ft_lstsize(a) == 5)
		ft_five_sort(&a, &b);
	else
	{
		ft_big_sort(&a, &b, sort);
		*stack1 = a;
	}
	ft_freelist(a);
}

void	ft_big_sort(t_list **stack1, t_list **stack2, int sort)
{
	int		i;
	int		size;

	i = 0;
	while (i < sort)
	{
		ft_prime_sort(stack1, stack2, i);
		size = ft_lstsize((*stack2));
		while (size > 0)
		{
			push(stack1, stack2);
			write(1, "pa\n", 3);
			size--;
		}
		i++;
	}
}

void	ft_prime_sort(t_list **stack1, t_list **stack2, int exp)
{
	int		size;
	char	*temp;

	size = ft_lstsize((*stack1));
	while (size > 0)
	{
		temp = (*stack1)->content;
		if (temp[31 - exp] == '1')
		{
			rotate(stack1);
			write(1, "ra\n", 3);
		}
		else
		{
			push(stack2, stack1);
			write(1, "pb\n", 3);
		}
		size--;
	}
}

int	ft_sort_nbr(t_list **head)
{
	int		max;
	int		i;
	char	*str;

	max = 0;
	while ((*head))
	{
		i = 0;
		str = (*head)->content;
		while (str[i])
		{
			if (str[i] == '1' && max < 32 - i)
				max = 32 - i;
			i++;
		}
		(*head) = (*head)->next;
	}
	return (max);
}

int	ft_is_sort(t_list **a)
{
	t_list	*head;

	head = *a;
	while ((*a)->next)
	{
		if (ft_btoi((*a)->content) < ft_btoi((*a)->next->content))
			(*a) = (*a)->next;
		else
		{
			*a = head;
			return (0);
		}
	}
	*a = head;
	return (1);
}
