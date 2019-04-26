/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_massiv_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 21:09:59 by pnita             #+#    #+#             */
/*   Updated: 2019/04/26 21:10:41 by pnita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_massiv_alloc(char *s, char c)
{
	int		i;
	int		len;
	char	**a;

	i = 0;
	len = 0;
	if (s[i] != c)
		len++;
	i++;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			len++;
		i++;
	}
	a = (char**)malloc(sizeof(char*) * (len + 1));
	return (a);
}
