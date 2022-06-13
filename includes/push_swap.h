/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:14:15 by lorampon          #+#    #+#             */
/*   Updated: 2022/06/09 16:37:34 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

int		checkerror(int argc, char **argv);
int		checkargv(int argc, char **argv);
int		checkduplicate(int argc, char **argv);
int		check_intmax(char **argv);

t_list	*createstack(int argc, char **argv, int j);
char	**ft_simplify_stack(int argc, char **argv);
int		ft_compare(const char *s1, const char *s2);
char	*ft_simplify_stack_next(char *str, char **strs);

void	swap(t_list *head);
void	push(t_list **list1, t_list **list2);
void	rotate(t_list **lst);
void	reverse(t_list **lst);
void	ft_double_push(t_list **stack1, t_list **stack2);
int		ft_rotate_or_reverse(t_list **a, int tofind);

void	sorter(t_list **stack1, t_list **stack2);
void	ft_big_sort(t_list **stack1, t_list **stack2, int size);
void	ft_prime_sort(t_list **stack1, t_list **stack2, int exp);
int		ft_sort_nbr(t_list **head);
int		ft_is_sort(t_list **a);

void	ft_five_sort(t_list **stack1, t_list **stack2);
void	ft_five_sort_loop(t_list **stack1, t_list **stack2, int tofind);
void	ft_three_sort(t_list **stack1);
void	ft_three_sort_next(int tmp1, int tmp2, int tmp3, t_list **stack1);
void	ft_two_sort(t_list **a);

void	ft_freelist(t_list *head);
void	ft_freestack(char **list);

#endif
