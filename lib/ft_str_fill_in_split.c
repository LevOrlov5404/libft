/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_fill_in_split.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 21:11:12 by pnita             #+#    #+#             */
/*   Updated: 2019/04/26 21:11:46 by pnita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_fill_in_split(char *s, int *i, char c)
{
	int		j;
	int		len;
	char	*a_i;

	len = ft_len_before_delim(s + *i, c);
	a_i = (char*)malloc(sizeof(char) * (len + 1));
	if (a_i)
	{
		j = 0;
		while (s[*i] != c && s[*i] != '\0')
		{
			a_i[j] = s[*i];
			(*i)++;
			j++;
		}
		a_i[j] = '\0';
	}
	return (a_i);
}
