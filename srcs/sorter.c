/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:11:28 by lorampon          #+#    #+#             */
/*   Updated: 2022/06/03 16:26:48 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sorter(t_list **stack1, t_list **stack2)
{
	t_list	*a;
	t_list	*b;
	int		size;
	int		i;
	int		sort;

	b = *stack2;
	a = *stack1;
	i = 0;
	sort = ft_sort_nbr(stack1);
	if (sort > 3)
	{
		while (i < sort)
		{
			ft_prime_sort(&a, &b, i);
			size = ft_lstsize(b);
			while (size > 0)
			{
				push(&a, &b);
				write(1, "pa\n", 3);
				size--;
			}
			i++;
		}
		*stack1 = a;
	}
	else
		ft_small_sort(&a, &b);
}

void	ft_prime_sort(t_list **stack1, t_list **stack2, int exp)
{
	t_list	*a;
	t_list	*b;
	int		size;
	char	*temp;

	a = *stack1;
	b = *stack2;
	size = ft_lstsize(a);
	while (size > 0)
	{
		temp = a->content;
		if (temp[31 - exp] == '1')
		{
			rotate(&a);
			write(1, "ra\n", 3);
		}
		else
		{
			push(&b, &a);
			write(1, "pb\n", 3);
		}
		size--;
	}
	*stack1 = a;
	*stack2 = b;
}

int	ft_sort_nbr(t_list **head)
{
	int		max;
	int		i;
	char	*str;
	t_list	*a;

	a = *head;
	max = 0;
	while (a)
	{
		i = 0;
		str = a->content;
		while (str[i])
		{
			if (str[i] == '1' && max < 32 - i)
				max = 32 - i;
			i++;
		}
		a = a->next;
	}
	return (max);
}

void	ft_small_sort(t_list **stack1, t_list **stack2)
{
	t_list	*a;
	t_list	*b;
	char	*str;
	int		i;

	b = *stack2;
	a = *stack1;
	while(a->next)
	{
		
	}
}