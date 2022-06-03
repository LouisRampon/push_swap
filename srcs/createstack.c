/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createstack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:24:17 by lorampon          #+#    #+#             */
/*   Updated: 2022/06/03 16:07:14 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*createstack(int argc, char **argv)
{
	int		i;
	t_list	*temp_struct;
	t_list	*head;
	void	*ptr;

	i = 0;
	head = NULL;
	ptr = NULL;
	argv = ft_simplify_stack(argc, argv);
	while (i < argc)
	{
		ptr = argv[i];
		temp_struct = ft_lstnew(ptr);
		ft_lstadd_back(&head, temp_struct);
		i++;
	}
	free(argv);
	return (head);
}

char	**ft_simplify_stack(int argc, char **argv)
{
	int		j;
	char	**str;

	j = 0;
	str = malloc(sizeof(*str) * (argc + 1));
	if (!str)
		return (0);
	while (argv[j])
	{
		str[j] = ft_jesaispas(argv[j], argv);
		j++;
	}
	j = 0;
	return (str);
}

char	*ft_jesaispas(char	*str, char **strs)
{
	int	nbr;
	int	i;

	i = 0;
	nbr = 0;
	while (strs[i])
	{
		if (ft_compare(str, strs[i]))
			nbr++;
		i++;
	}
	return (ft_itob(nbr));
}

char	*ft_itob(int nbr)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * 33);
	if (!str)
		return (0);
	while (j < 32)
	{
		if (nbr % 2)
			str[i] = '1';
		else
			str[i] = '0';
		nbr = nbr / 2;
		i++;
		j++;
	}
	str[j] = '\0';
	ft_revstr(str);
	return (str);
}

void	ft_revstr(char *str)
{
	int		i;
	int		len;
	char	temp;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
}
