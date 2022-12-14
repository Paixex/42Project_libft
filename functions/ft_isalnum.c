/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:15:54 by digil-pa          #+#    #+#             */
/*   Updated: 2022/11/18 14:47:32 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int k)
{
	if ((k >= '0' && k <= '9')
		|| (k >= 'A' && k <= 'Z')
		|| (k >= 'a' && k <= 'z'))
		return (1);
	return (0);
}
