/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluong <vluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:56:35 by vluong            #+#    #+#             */
/*   Updated: 2022/12/07 17:06:09 by vluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		else
			s++;
	}
	if (!c)
		return ((char *)s);
	return (0);
}
/*
int	main(void)
{
	char *str = "salut mon pote";
	char c = 'm';
	char *p;
	p = ft_strchr(str, c);
	printf("first m: %s\n", p);
}
*/
