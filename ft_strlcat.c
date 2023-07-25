/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:50:55 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/25 18:09:25 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		altdst;
	size_t		altsrc;
	size_t		i;

	if (!size)
		return (ft_strlen(dst) + size);
	altsrc = ft_strlen(src);
	i = 0;
	while (dst[i] && i < size)
		i++;
	altdst = i;
	while (src[i - altdst] && i < size - 1)
	{
		dst[i] = src[i - altdst];
		i++;
	}
	if (altdst < size)
		dst[i] = '\0';
	return (altdst + altsrc);
}
