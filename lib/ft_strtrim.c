/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:37:37 by pnita             #+#    #+#             */
/*   Updated: 2019/04/12 17:37:39 by pnita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		n1;
	int		n2;
	int		i;
	char	*s_after;

	if (!s)
	{
		char *str = (char *)malloc(1);
		str[0] = 0;
		return (str);
	}
	n1 = 0;
	n2 = ft_strlen(s) - 1;
	while (s[n1] == ' ' || s[n1] == '\t' || s[n1] == '\n')
		n1++;
	while (s[n2] == ' ' || s[n2] == '\t' || s[n2] == '\n')
		n2--;
	if (n2 - n1 <= 0 || !(s_after = ft_strnew(n2 - n1 + 1 )))
	{
		char *str = (char *)malloc(1);
		if (!str)
			return (0);
		str[0] = 0;
		return (str);
	}
	i = 0;
	while (n1 <= n2)
	{
		s_after[i] = s[n1];
		n1++;
		i++;
	}
	s_after[i] = '\0';
	return (s_after);
}
