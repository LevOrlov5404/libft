/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 22:23:23 by pnita             #+#    #+#             */
/*   Updated: 2019/04/11 22:23:25 by pnita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s,
	char (*f)(unsigned int, char))
{
	char			*str;
	char			*str_after;
	unsigned int	i;

	str = (char*)s;
	str_after = ft_strnew(ft_strlen(str) + 1);
	i = 0;
	while (str[i] != '\0')
	{
		str_after[i] = f(i, str[i]);
		i++;
	}
	str_after[i] = '\0';
	return (str_after);
}
