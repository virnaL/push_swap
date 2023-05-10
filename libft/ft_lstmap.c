/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluong <vluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:43:26 by vluong            #+#    #+#             */
/*   Updated: 2022/12/07 17:00:09 by vluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_lstclear_norme(t_list **lst, void (*del)(void*))

{
	t_list	*temp;

	if (!lst || !del)
		return (NULL);
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))

{
	t_list	*new_data;
	t_list	*new_lst;

	if (!lst || !f || !del)
		return (NULL);
	new_data = ft_lstnew(f(lst->content));
	if (!new_data)
	{
		ft_lstclear(&new_lst, del);
		return (ft_lstclear_norme(&lst, del));
	}
	new_lst = new_data;
	lst = lst->next;
	while (lst)
	{
		new_data = ft_lstnew(f(lst->content));
		if (!new_data)
		{
			ft_lstclear(&lst, del);
			return (ft_lstclear_norme(&new_lst, del));
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, new_data);
	}
	return (new_lst);
}
