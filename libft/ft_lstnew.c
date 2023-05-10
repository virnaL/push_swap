/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluong <vluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:00:14 by vluong            #+#    #+#             */
/*   Updated: 2022/12/05 14:04:13 by vluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelt;

	newelt = (t_list *)malloc(sizeof(*newelt));
	if (!(newelt))
		return (NULL);
	newelt->content = content;
	newelt->next = NULL;
	return (newelt);
}
