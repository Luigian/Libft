/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 13:36:20 by lusanche          #+#    #+#             */
/*   Updated: 2019/05/23 21:33:37 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *p_dst;
	char *p_src;

	p_dst = (char *)dst;
	p_src = (char *)src;
	while (len--)
	{
		*p_dst = *p_src;
		++p_dst;
		++p_src;
	}
	return (dst);
}
