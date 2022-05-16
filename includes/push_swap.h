/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:14:15 by lorampon          #+#    #+#             */
/*   Updated: 2022/05/04 17:33:08 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/includes/libft.h"

int		checkerror(int argc, char **argv);
int		checkargv(int	argc, char **argv);
int		checkduplicate(int argc, char **argv);
t_list	*createstack(int argc, char **argv);
void	swap(t_list *head);
void	push(t_list **list1, t_list **list2);
void	rotate(t_list **lst);
void	reverse(t_list **lst);

#endif
