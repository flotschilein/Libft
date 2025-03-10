/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:09:16 by fbraune           #+#    #+#             */
/*   Updated: 2025/03/10 15:14:45 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *bezero(void *s, size_t n)
{
    unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- >= 1)
		*ptr++ = '\0';
	return (s);
}
