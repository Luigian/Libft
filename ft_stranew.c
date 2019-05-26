/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stranew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:34:21 by lusanche          #+#    #+#             */
/*   Updated: 2019/05/24 13:42:34 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_stranew(size_t size)
{
	char	**anew;

	if (!(anew = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	while (size--)
		anew[size] = NULL;
	anew[size] = NULL;
	return (anew);
}
