/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:01:13 by lorampon          #+#    #+#             */
/*   Updated: 2021/12/01 16:28:49 by lorampon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	i = 0;
	if (!s || !f)
		return (0);
	dest = malloc(ft_strlen(s) + 1);
	if (!dest)
		return (0);
	while (s[i])
	{
		dest[i] = (f)(i, s[i]);
		if (!dest[i])
			return (0);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
