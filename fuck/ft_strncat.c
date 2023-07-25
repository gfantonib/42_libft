/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:52:08 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/25 17:05:52 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*s1alt;
	size_t	i;

	s1alt = s1;
	i = 0;
	while (*s1alt != '\0')
		s1alt++;
	while (i != n && *s2 != '\0')
	{
		*s1alt = *s2;
		s1alt++;
		s2++;
		i++;
	}
	*s1alt = '\0';
	return (s1);
}
