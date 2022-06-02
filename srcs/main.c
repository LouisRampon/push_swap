/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:13:53 by lorampon          #+#    #+#             */
/*   Updated: 2022/06/01 18:07:47 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main (int argc, char **argv)
{
	char **list;
	t_list	*head;
	t_list	*b;
	int i;
	

	if (argc == 2)
		list = ft_split(argv[1], ' ');
	else
		list = &argv[1];
	i = 0;
	while (list[i])
		i++;
	if (checkerror(i, list))
		return (0);
	head = createstack(i, list);
	sorter(&head, &b);
	while (head->next)
	{
	 	ft_printf("%d \n", *(int *)head->content);
		head = head->next;
	}
	ft_printf("%d \n", *(int *)head->content);
	return (0);
}

