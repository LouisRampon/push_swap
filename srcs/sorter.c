/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:11:28 by lorampon          #+#    #+#             */
/*   Updated: 2022/06/01 18:05:47 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sorter(t_list **stack1, t_list **stack2)
{
	t_list	*a;
	t_list	*b;
	int		size;
	int		i;
	int		exp;

	b = *stack2;
	a = *stack1;
	i = 0;
	exp = 1;
	while(i < 3)
	{
		ft_prime_sort(&a, &b, exp);
		size = ft_lstsize(b);
		while (size > 0)
		{
			push(&a, &b);
			write(1, "pa\n", 3);
			size--;
		}
		i++;
		exp = exp * 10;
	}
	*stack1 = a;
}

void	ft_prime_sort(t_list **stack1, t_list **stack2, int exp)
{
	int		digit;
	int		size;
	t_list	*a;
	t_list	*b;
	int		i;

	a = *stack1;
	b = *stack2;
	digit = 0;
	while (digit < 10)
	{
		size = ft_lstsize(a);
		i = digit_present(&a, digit, exp);
		while (i > 0)
		{
			if (ft_ror(&a, digit, size, exp))
				ft_reverse_push(&a, &b, digit, exp);
			else
				ft_rotate_push(&a, &b, digit, exp);
			i--;
		}
		digit++;
	}
	*stack1 = a;
	*stack2 = b;
}

void	ft_reverse_push(t_list	**stack1, t_list **stack2, int digit, int exp)
{
	t_list	*a;
	t_list	*b;

	b = *stack2;
	a = *stack1;
	while (digit != (*(int *)a->content) % (exp * 10) / exp) 
	{
		reverse(&a);
		write(1, "rra\n", 4);
	}
	push(&b, &a);
	write(1, "pb\n", 3);
	*stack1 = a;
	*stack2 = b;
}

void	ft_rotate_push(t_list **stack1, t_list **stack2, int digit, int exp)
{
	t_list	*a;
	t_list	*b;

	b = *stack2;
	a = *stack1;
	while (digit != (*(int *)a->content) % (exp * 10) / exp) 
	{
		rotate(&a);
		write(1, "ra\n", 3);
	}
	push(&b, &a);
	write(1, "pb\n", 3);
	*stack1 = a;
	*stack2 = b;
}

int	ft_ror(t_list **head, int digit, int size, int exp)
{
	t_list	*a;
	int		i;

	a = *head;
	i = 0;
	while (a && digit != (*(int *)a->content) % (exp * 10) / exp)
	{
		i++;
		a = a->next;
	}
	//ft_printf("digit = %d a = %d\n", digit, (*(int *)a->content) % (exp * 10) / exp);
	if (i > size / 2)
		return (1);
	return (0);
}

int	digit_present(t_list **head, int digit, int exp)
{
	t_list *a;
	int	i;

	a = *head;
	i = 0;
	while (a)
	{
		if ((*(int *)a->content) % (exp * 10) / exp == digit)
			i++;
		a = a->next;
	}
	return (i);
}