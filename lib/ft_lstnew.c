/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 22:02:21 by pnita             #+#    #+#             */
/*   Updated: 2019/04/16 22:02:23 by pnita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content,
size_t content_size)
{
	t_list	*a;

	if (!(a = (t_list*)malloc(sizeof(t_list)))) //сделать копиb и free(a)
		return (0);
	if (!content)
	{
		a->content = 0;
		a->content_size = 0;
	}
	else
	{
		a->content = (void*)content;
		a->content_size = content_size;
	}
	a->next = 0;
	return (a);
}
