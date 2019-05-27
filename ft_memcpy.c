/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 10:59:31 by lusanche          #+#    #+#             */
/*   Updated: 2019/05/26 22:34:36 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *ptr;
	char *ptr2;

	ptr = (char *)dst;
	ptr2 = (char *)src;
	while (n--)
	{
		*ptr = *ptr2;
		++ptr;
		++ptr2;
	}
	return (dst);
}
