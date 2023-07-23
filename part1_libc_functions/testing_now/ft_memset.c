/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:22:11 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/22 21:12:55 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*placeholder;

	placeholder = (unsigned char *)b;
	while (len > 0)
	{
		*placeholder = (unsigned char)c;
		placeholder++;
		len--;
	}
	return (b);
}

//#include <stdio.h>
//int	main(void)
//{
//	char str[50] = "GeeksForGeeks is for programming geeks.";
//
//	printf("\nBefore memset(): %s\n", str);
//	ft_memset(str + 13, 47, 8*sizeof(char));
//	printf("After memset():  %s", str);
//	return (0);
//}
