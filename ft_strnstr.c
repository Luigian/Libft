/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 20:25:10 by lusanche          #+#    #+#             */
/*   Updated: 2019/05/24 11:26:24 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*needle_first_element;

	if (!*needle)
		return ((char *)haystack);
	needle_first_element = (char *)needle;
	while (*haystack && len)
	{
		while (*haystack && *haystack != *needle && len)
		{
			++haystack;
			--len;
		}
		while (*haystack && *needle && (*haystack == *needle && len))
		{
			++haystack;
			++needle;
			--len;
		}
		if (!*needle)
			return ((char *)haystack - ft_strlen(needle_first_element));
		needle = needle_first_element;
	}
	return (NULL);
}
