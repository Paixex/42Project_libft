/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:01:40 by digil-pa          #+#    #+#             */
/*   Updated: 2022/10/27 17:53:29 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	k;

	k = 0;
	if (!s)
		return (NULL);
	while (s[k] && c != s[k])
		k++;
	if (c == s[k])
		return ((char *)s);
	return (NULL);
}
