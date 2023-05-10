/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluong <vluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:08:56 by vluong            #+#    #+#             */
/*   Updated: 2023/05/08 18:41:57 by vluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int is_arg_number(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[0] == '-')
			i++;
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int is_arg_int(char *str)
{
	int nbr;
	nbr = atoll(str);
	printf("%d\n", nbr);
	if (nbr >= -2147483648 && nbr <= 2147483647)
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	while (argv[i])
	{
		if (!is_arg_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		if (!is_arg_int(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("OK\n");
	return (0);
}