/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 16:41:21 by lusanche          #+#    #+#             */
/*   Updated: 2019/05/24 10:58:13 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*needle_first_element;

	if (!*needle)
		return ((char *)haystack);
	needle_first_element = (char *)needle;
	while (*haystack)
	{
		while (*haystack && *haystack != *needle)
			++haystack;
		while (*haystack && *needle && (*haystack == *needle))
		{
			++haystack;
			++needle;
		}
		if (!*needle)
			return ((char *)haystack - ft_strlen(needle_first_element));
		needle = needle_first_element;
	}
	return (NULL);
}
