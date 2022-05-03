/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:29:41 by lorampon          #+#    #+#             */
/*   Updated: 2022/05/03 15:50:33 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_list *head)
{
	void *ptr;

	ptr = head->content;
	head->content = head->next->content;
	head->next->content = ptr;
}

void	push(t_list *list1, t_list *list2)
{
	if (!list1)
		return ;
	list1->next = list2;
}

void	rotate(t_list **lst)
{
	t_list *head;
	t_list *tail;
	
	head = *lst;
	tail = ft_lstlast(*lst);
	*lst = (*lst)->next;
	head->next = NULL;
	tail->next = head;
}

void	reverse(t_list **lst)
{
	t_list	*tail;
	int		size;

	size = ft_lstsize(*lst);
	tail = ft_lstlast(*lst);
	tail->next = *lst;
	*lst = tail;
	while (size > 1)
	{
		*lst = (*lst)->next;
		size--;
	}
	(*lst)->next = NULL;
	*lst = tail;
}