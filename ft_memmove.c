/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:21:45 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/24 15:48:15 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*c_src;
	unsigned char	*c_dest;

	c_src = (unsigned char *)src;
	c_dest = (unsigned char *)dest;
	if (src > dest)
	{
		while (n--)
		{
			*c_dest = *c_src;
			c_dest++;
			c_src++;
		}
	}
	else if (dest > src)
	{
		while (n--)
			c_dest[n] = c_src[n];
	}
	return (dest);
}	

//#include <string.h>
//#include <stdio.h>
//int	main(void)
//{
//	//char	src[] = "flour";
//	char	dest[] = "Melvin is trash!";
//	//char	src2[] = "flour";
//	char	dest2[] = "Melvin is trash!";
//	int	size = 10;
//	char	*result;
//
//	printf("before: %s\n", dest);
//	result = ft_memmove(dest + 1, dest, size);
//	printf("after: %s\n", result);
//	
//	printf("before: %s\n", dest2);
//	result = memmove(dest2 + 1, dest2, size);
//	printf("after: %s\n", result);
//	return (0);
//}
	
