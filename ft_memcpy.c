/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:46:26 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/23 14:03:19 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*altdst;
	unsigned char	*altsrc;

	altdst = (unsigned char *)dst;
	altsrc = (unsigned char *)src;
	while (n > 0)
	{
		*altdst = *altsrc;
		altdst++;
		altsrc++;
		n--;
	}
	return (dst);
}

//#include <stdio.h>
//int     main(void)
//{
//	char    src[] = "aaaaaaaaaaaa";
//	char    dest[] = "bbbbbbbbbbbb";
//	printf("before: %s\n", dest);
//	ft_memcpy(dest, src, sizeof(src));
//	printf("after: %s\n", dest);
//	return (0);
//}
