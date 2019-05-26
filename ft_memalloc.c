/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:33:06 by lusanche          #+#    #+#             */
/*   Updated: 2019/05/20 10:20:52 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*fresh;

	if (!(fresh = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (size)
		fresh[--size] = 0;
	return ((void *)fresh);
}
