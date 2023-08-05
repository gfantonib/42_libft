/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 09:30:27 by gfantoni          #+#    #+#             */
/*   Updated: 2023/08/05 12:19:28 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return ((char *)ft_calloc(1, sizeof(char)));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}

//char	*ft_substr(char const *s, unsigned int start, size_t len)
//{
//	char	*new_str;
//	size_t	i;
//	size_t	j;
//
//	if (!s || !(new_str = (char *)malloc(len + 1)))
//		return (0);
//	i = start;
//	j = 0;
//	while (i < ft_strlen(s) && j < len)
//		new_str[j++] = s[i++];
//	new_str[j] = '\0';
//	return (new_str);
//}
