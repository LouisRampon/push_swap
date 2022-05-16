/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:13:53 by lorampon          #+#    #+#             */
/*   Updated: 2022/05/04 17:33:41 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main (int argc, char **argv)
{
	t_list	*head;

	if (checkerror(argc, argv))
		return (0);
	head = createstack(argc, argv);
	//  while (head->next)
	//  {
	//  	ft_printf("%d \n", *(int *)head->content);
	//  	head = head->next;
	//  }
	//  ft_printf("%d \n", *(int *)head->content);
	return (0);
}

