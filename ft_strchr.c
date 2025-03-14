/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraune <fbraune@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:23:01 by fbraune           #+#    #+#             */
/*   Updated: 2025/03/14 15:15:19 by fbraune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c && s[i] != '\0')
		i++;
	if (c == '\0')
		return ((char *)(s + i));
	if (s[i] != '\0')
		return ((char *)(s + i));
	return (NULL);
}

// int main()
// {
// 	char *str = "TEST 123 ,c sdasd  r3ewd";
// 	printf("%s\n", ft_strchr(str, 'a'));
// }
