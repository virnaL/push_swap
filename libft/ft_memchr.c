/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluong <vluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:33:09 by vluong            #+#    #+#             */
/*   Updated: 2022/12/04 18:21:25 by vluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*string;

	string = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*string == (unsigned char)c)
			return (string);
		string++;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	unsigned char s[] = "bonjour";
	int c = 'j';
	size_t n = 6;

	printf("le mieng: %p\n", ft_memchr(s, c ,n));
	printf("le vrai: %p\n", memchr(s, c, n));
}
*/