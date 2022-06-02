/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:14:15 by lorampon          #+#    #+#             */
/*   Updated: 2022/06/01 17:35:37 by lorampon         ###   ########.fr       */
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
void	sorter(t_list **stack1, t_list **stack2);
int		ft_moyenne(t_list **a, int size);
void	divise(t_list **stack1, t_list **stack2, int size);
int	ft_ror(t_list **head, int digit, int size, int exp);
void	ft_reverse_push(t_list	**stack1, t_list **stack2, int digit, int exp);
void	ft_rotate_push(t_list **stack1, t_list **stack2, int digit, int exp);
void	ft_prime_sort(t_list **stack1, t_list **stack2, int exp);
int		digit_present(t_list **head, int digit, int exp);

#endif
