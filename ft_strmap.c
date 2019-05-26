/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:59:35 by lusanche          #+#    #+#             */
/*   Updated: 2019/05/23 22:10:18 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	char	*fresh;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	fresh = ft_strnew(len);
	while (len--)
	{
		fresh[i] = f(s[i]);
		++i;
	}
	return (fresh);
}
