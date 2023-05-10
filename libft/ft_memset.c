/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluong <vluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:16:05 by vluong            #+#    #+#             */
/*   Updated: 2022/12/05 15:58:18 by vluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char		*str;

	if (!s)
		return (NULL);
	str = s;
	i = 0;
	while (i < n)
	{
		*str = (char)c;
		str++;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char s[] = "123456789";
	int c = 8;
	size_t n = 3;
	printf("ft_memset: %p\n", ft_memset(s, c , n));
}
*/