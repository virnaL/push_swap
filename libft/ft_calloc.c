/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluong <vluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:07:00 by vluong            #+#    #+#             */
/*   Updated: 2022/12/07 16:52:24 by vluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	total_size;

	mem = NULL;
	if (size && nmemb * size / size != nmemb)
		return (NULL);
	total_size = nmemb * size;
	mem = malloc(total_size);
	if (!mem)
		return (NULL);
	if (mem)
		ft_bzero(mem, total_size);
	return (mem);
}
