/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 18:58:15 by fbraune           #+#    #+#             */
/*   Updated: 2025/03/17 15:24:38 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res_lst;
	t_list	*new_part;
	void	*content;

	res_lst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		content = f(lst->content);
		new_part = ft_lstnew(content);
		if (!new_part)
		{
			del(content);
			ft_lstclear(&res_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&res_lst, new_part);
		lst = lst->next;
	}
	return (res_lst);
}
