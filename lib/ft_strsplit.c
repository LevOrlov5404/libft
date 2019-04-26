/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 18:20:40 by pnita             #+#    #+#             */
/*   Updated: 2019/04/12 18:20:41 by pnita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		ai;
	char	**a;

	if (s == 0 || !(a = ft_massiv_alloc((char*)s, c)))
		return (0);
	i = 0;
	ai = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
		{
			a[ai] = ft_str_fill_in_split((char*)s, &i, c);
			if (!a[ai])
			{
				ft_delite(&a, ai);
				return (0);
			}
			ai++;
		}
		else
			i++;
	}
	a[ai] = 0;
	return (a);
}
