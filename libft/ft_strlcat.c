/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluong <vluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:12:47 by vluong            #+#    #+#             */
/*   Updated: 2022/12/05 16:43:23 by vluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	if (size == 0)
		return (len + ft_strlen(src));
	while (dest[len] && len < size)
		len++;
	i = len;
	while (i < size - 1 && src[i - len])
	{
		dest[i] = src[i - len];
		i++;
	}
	if (len < size)
		dest[i] = 0;
	return (len + ft_strlen(src));
}
