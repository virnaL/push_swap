/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluong <vluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:31:42 by vluong            #+#    #+#             */
/*   Updated: 2022/12/04 15:46:16 by vluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	countdown(int i)
{
	unsigned int	count;

	if (i <= 0)
		count = 1;
	else
		count = 0;
	while (i != 0)
	{
		count++;
		i /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned int	count;
	char			c;
	char			*str;

	count = countdown(n);
	str = malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[count] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		c = n % 10;
		if (n < 0)
			c = -c;
		str[--count] = (c + '0');
		n /= 10;
	}
	return (str);
}
/*
int	main(void)
{
	int n = -33;
	printf("itoa: %s\n", ft_itoa(n));
}
*/
