/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:14:15 by lorampon          #+#    #+#             */
/*   Updated: 2022/06/03 16:06:38 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

int		checkerror(int argc, char **argv);
int		checkargv(int argc, char **argv);
int		checkduplicate(int argc, char **argv);
t_list	*createstack(int argc, char **argv);
void	swap(t_list *head);
void	push(t_list **list1, t_list **list2);
void	rotate(t_list **lst);
void	reverse(t_list **lst);
void	sorter(t_list **stack1, t_list **stack2);
void	ft_prime_sort(t_list **stack1, t_list **stack2, int exp);
char	**ft_simplify_stack(int argc, char **argv);
char	*ft_itob(int nbr);
void	ft_revstr(char *str);
int		ft_compare(const char *s1, const char *s2);
void	ft_freelist(t_list *head);
int		ft_sort_nbr(t_list **head);
char	*ft_jesaispas(char	*str, char **strs);
void	ft_freestack(char **list);

#endif
