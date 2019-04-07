/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 19:11:12 by pnita             #+#    #+#             */
/*   Updated: 2019/04/07 19:11:14 by pnita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
	//int		i;
	int		c;
	char	str[] = "aaaaBaaaa";
	char	*s;

	s = memchr(str, (int)'B', 5);
	/*if (!s)
		printf("null\n");
	else*/
	printf("%c\n", *s);
	return (0);
}
