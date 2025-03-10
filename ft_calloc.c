/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 20:13:28 by fbraune           #+#    #+#             */
/*   Updated: 2025/03/10 20:31:03 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	unsigned char	*ptr_count;
	size_t			i;
	size_t			total_size;

	total_size = count * size;
	ptr = malloc(total_size);
	i = 0;
	if (!ptr)
		return (NULL);
	ptr_count = (unsigned char *)ptr;
	while (i < total_size)
	{
		ptr_count[i] = '\0';
		i++;
	}
	return (ptr);
}
