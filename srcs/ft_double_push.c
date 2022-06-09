/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:06:39 by lorampon          #+#    #+#             */
/*   Updated: 2022/06/08 17:48:55 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_double_push(t_list **stack1, t_list **stack2)
{
	push(stack1, stack2);
	push(stack1, stack2);
	write(1, "pa\npa\n", 6);
}
