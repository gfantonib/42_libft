/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 10:21:03 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/23 11:55:37 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void	ft_bzero(void *s, size_t n)
//{
//	unsigned char	*placeholder;
//	
//	placeholder = (unsigned char *) s;
//	while (n > 0)	
//	{
//		*placeholder = '0';
//		placeholder++;
//		n--;
//	}
//
//}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '0', n);
}

//#include <stdio.h>
//int	main(void)
//{
//	int	n = 5;
//	char	str[] = "Melvin vive!";
//
//	printf("str before: %s\n", str);
//	ft_bzero(str + 5, n);
//	printf("str after: %s\n", str);
//	return (0);
//}
