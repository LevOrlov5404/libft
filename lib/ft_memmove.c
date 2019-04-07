/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:33:03 by pnita             #+#    #+#             */
/*   Updated: 2019/04/06 20:33:04 by pnita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	while (i < len && s[i])
	{
		d[i] = s[i];
		i++;
	}
	if (!s[i] && i < len)
	{

		while (d[i] && i < len)
		{
			d[i] = '\0';
			i++;
		}
	}
	return (dst);
}

/*int main()
{
	char s1[] = "aloha";
	char s2[] = "aaaaaaaaa";
	int i;

	ft_memmove(s2, s1, 11);
	printf("%s\n", s2);
	i = 0;
	while (i < 9)
	{
		printf("%c", s2[i]);
		i++;
	}
	return (0);
}*/
