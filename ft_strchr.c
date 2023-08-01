/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:32:18 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/31 11:25:49 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*alts;
	char	altc;

	alts = (char *)s;
	altc = c;
	i = 0;
	while (alts[i] != altc)
	{
		if (alts[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)alts + 1);
}
