/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluong <vluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:54:34 by vluong            #+#    #+#             */
/*   Updated: 2022/12/05 13:52:41 by vluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nb_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		while (s[i] && s[i] == c)
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		current_word;
	int		i;
	int		start;

	i = 0;
	start = 0;
	current_word = 0;
	strings = malloc(sizeof(char *) * (nb_words(s, c) + 1));
	if (!strings)
		return (NULL);
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			strings[current_word++] = ft_substr(s, start, i - start);
		}
		while (s[i] && s[i] == c)
			i++;
	}
	strings[current_word] = NULL;
	return (strings);
}
/*
int	main(int argc, char **argv)
{
	char	**str = ft_split(argv[1], ' ');
	int	i = 0;

	while (str[i] != NULL)
	{
		printf("mot numero: %d: %s\n", i + 1, str[i]);
		i++;
	}
	return (0);
}
*/