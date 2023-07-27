/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:21:10 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/27 12:14:28 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*altbig;
	char	*altlittle;
	size_t	l;
	size_t	i;

	altbig = (char *)big;
	altlittle = (char *)little;
	if (*little == '\0')
		return (altbig);
	l = ft_strlen(altlittle);
	i = 0;
	while (altbig[i] != '\0' && (i + l) <= len)
	{
		if (ft_strncmp(altbig + i, altlittle, l) == 0)
			return (altbig + i);
		i++;
	}
	return (NULL);
}
