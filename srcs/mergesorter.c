/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:05:11 by lorampon          #+#    #+#             */
/*   Updated: 2022/05/04 17:32:49 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	mergesorter(t_list **stack)
{
	t_list 	*a;
	t_list	*b;
	t_list	*head;
	
	head = *stack;
	if ((head == NULL) || (head->next == NULL))
        return ;
	splitstack(head, &a, &b);
	sorter(&a);
	sorter(&b);
	*stack = algo(a, b);
}

void	splitstack(t_list *head, t_list **a, t_list **b)
{
	t_list	*stack1;
	t_list	*stack2;

	stack1 = head;
	stack2 = head->next;
	while (stack2)
	{
		stack2 = stack2->next;
		if (stack2)
		{
			stack1 = stack1->next;
			stack2 = stack2->next;
		}
	}
	*a = head;
	*b = stack1->next;
	stack1->next = NULL;
	return;
}

t_list	*algo(t_list *a, t_list *b)
{
	t_list	*output;
	t_list	**ptr;

	output = NULL;
	ptr = &output;
	if (a == NULL)
		return (b);
	if (b == NULL)
		return (a);
	while (1)
	{
		if (a == NULL)
		{
			*ptr = b;
			break;
		}
		if (b == NULL)
		{
			*ptr = a;
			break;
		}
		if (*(int *)a->content <= *(int *)b->content)
		{
			push(ptr, &a);
			ft_printf("pb\n");
		}	
		else
		{
			push(ptr, &b);
			ft_printf("pa\n");
		}
		ptr = &((*ptr)->next);
	}
	return (output);
}