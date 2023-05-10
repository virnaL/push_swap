/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluong <vluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:41:17 by vluong            #+#    #+#             */
/*   Updated: 2022/12/04 17:48:48 by vluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*s3;
	int		lens1;

	i = 0;
	j = 0;
	lens1 = ft_strlen(s1);
	s3 = malloc(sizeof (char) * (lens1 + ft_strlen(s2) + 1));
	if (!s1 || !s2)
		return (NULL);
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s3[lens1] = s2[j];
		lens1++;
		j++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
/*
int	main(void)
{
	char const s1[] = "salut";
	char const s2[] = " les potes";
	printf("%s\n", ft_strjoin(s1, s2));
}
*/