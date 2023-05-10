/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluong <vluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:51:48 by vluong            #+#    #+#             */
/*   Updated: 2022/12/07 19:13:55 by vluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack,
		const char *needle, size_t len)

{
	size_t	c;

	if ((!haystack || !needle) && len == 0)
		return (NULL);
	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	c = ft_strlen(needle);
	while (*haystack && c <= len--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, c)))
			return ((char *)haystack);
	haystack++;
	}
	return (NULL);
}
