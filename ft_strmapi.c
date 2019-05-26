/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:37:21 by lusanche          #+#    #+#             */
/*   Updated: 2019/05/23 22:10:49 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	int		len;
	char	*freshi;

	i = 0;
	len = ft_strlen(s);
	freshi = ft_strnew(len);
	while (len--)
	{
		freshi[i] = f(i, s[i]);
		++i;
	}
	return (freshi);
}
